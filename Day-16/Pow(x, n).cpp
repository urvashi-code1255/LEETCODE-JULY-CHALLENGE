class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1 ;
        double a = x ;
        for(int i = 1 ; i < abs(n) ; i++)
                x *= a ;
        if(n > 0) 
            return (double)x ;
        else
            return (double)(1 / x );
    }
};
