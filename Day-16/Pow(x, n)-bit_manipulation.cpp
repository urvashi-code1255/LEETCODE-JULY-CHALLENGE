class Solution 
{
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1 ;
        int N = abs(n);
        double pow = 1 ;
        while(N)
        {
            if(N & 1)
                pow *= x ;
            N >>= 1 ;
            x *= x ;
        }
        if(n > 0)
            return pow ;
        else
            return 1 / pow ;
    }
};
