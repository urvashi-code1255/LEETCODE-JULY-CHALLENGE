class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>>ans ;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            int target = -nums[i] ;
            if(target < 0)
                break ;
            
            int front = i + 1 ;
            int back = nums.size() - 1 ;
            
            while(front < back)
            {
                int sum = nums[front] + nums[back] ;
                
                if(sum < target)
                    front++ ;
                else if(sum > target)
                    back-- ;
                else 
                {
                    vector<int>triplet ;
                    triplet.push_back(nums[i]) ;
                    triplet.push_back(nums[front]) ;
                    triplet.push_back(nums[back]) ;
                    ans.push_back(triplet) ;
                    
                    while(front < back && nums[front] == triplet[1]) //duplicates of front number.
                        front++ ;
                    while(front < back && nums[back] == triplet[2]) //duplicates of back number.
                        back-- ;
                    
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]) // duplicates of ith number.
                i++ ;
        }
        return ans ;
    }
};
