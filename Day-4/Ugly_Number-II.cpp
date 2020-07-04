class Solution {
public:
    int nthUglyNumber(int n)
    {
        vector<int>v(n);
        
        int l2 = 0 , l3 = 0 , l5 = 0;
        v[0] = 1 ;
        
        for(int i = 1 ; i < n ; i++)
        {
            int ans = min (2*v[l2] , min( 3*v[l3] , 5*v[l5])) ;
            
            if(ans == 2*v[l2])
                l2 ++ ;
            if(ans == 3*v[l3])
                l3 ++ ;
            if(ans == 5*v[l5])
                l5 ++ ;
            
            v[i] = ans ;
        }
        return v[n-1];
    }
};
