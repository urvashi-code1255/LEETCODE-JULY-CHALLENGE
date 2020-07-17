class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q;
        if(!root)
            return 0;
        q.push({root,0});
        unsigned long long res=0;
        while(!q.empty())
        {
            auto x = q.front();
            int size=q.size();
            auto curr=q.front();
            for(int i=0;i<size;i++)
            {
                curr=q.front();
                unsigned long long ind=curr.second;
                q.pop();
                if(curr.first->left)
                    q.push({curr.first->left,2*ind});
                if(curr.first->right)
                    q.push({curr.first->right,2*ind+1});
            }
            res=max(res,curr.second - x.second + 1);
        }
        return res;
    }
};
