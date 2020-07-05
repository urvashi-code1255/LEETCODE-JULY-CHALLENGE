class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int result = 0 ;
        for(int i = 0 ; i < 32 ; i++)                      // for example - 2 , 14 , 4 
        {                                                  // 2 -  0010
            int ones = 0 , zero = 0 ;                      // 14 - 1110
            for(auto j : nums)                             // 4 -  0100
            {                                              // at first position in all ,ones = 0 , zeroes = 3 
                if(j & (1 << i ))                          // at second position in all , ones = 2 , zeroes = 1 
                    ones ++ ;                              // at third position in all , ones = 2 , zeroes = 1 
                else                                       // at fourth position in all , ones = 1 , zeroes = 2 
                    zero ++ ;                              // result = 0*3 + 2*1 + 2*1 + 1*2 = 6
            }                                              // keep in mind positions are taken from end .
           result += ones*(zero) ;
        } 
        return result;
    }
};
