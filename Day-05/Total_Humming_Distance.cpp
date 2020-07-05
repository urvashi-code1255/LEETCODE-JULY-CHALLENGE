class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
       int result = 0 ;
        for(int i = 0 ; i < 32 ; i++)
        {   
            int ones = 0 , zero = 0 ;
            for(auto j : nums)
            {
                if(j & (1 << i ))
                    ones ++ ;
                else
                    zero ++ ;  
            }
           result += ones*(zero) ;
        } 
        return result;
    }
};
