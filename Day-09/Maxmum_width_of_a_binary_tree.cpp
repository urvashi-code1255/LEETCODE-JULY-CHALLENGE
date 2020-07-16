class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q;
        if(!root)
            return 0;
        q.push({root,0});
        unsigned long long ret=0;
        while(!q.empty())
        {
            auto fir=q.front();
            int si=q.size();
            auto curr=q.front();
            for(int i=0;i<si;i++)
            {
                curr=q.front();
                unsigned long long ind=curr.second;
                q.pop();
                if(curr.first->left)
                    q.push({curr.first->left,2*ind});
                if(curr.first->right)
                    q.push({curr.first->right,2*ind+1});
            }
            ret=max(ret,curr.second-fir.second+1);
        }
        return ret;;
    }
};
