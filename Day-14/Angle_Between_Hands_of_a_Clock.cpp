class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        double HA = (hour % 12 ) * 30 + minutes * 0.5;
        double MA = minutes * 6;
        double ans = abs(HA - MA);
        return min(ans, 360 - ans);
    }
};
