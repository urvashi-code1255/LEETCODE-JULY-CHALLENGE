class Solution {
public:
    bool isUgly(int num) {
        int temp = 0 ;
        while(num != temp)
        {
            temp = num;
            if(num%2 == 0)
                num /= 2;
            if(num%3 == 0)
                num /= 3;
            if(num%5 == 0)
                num /= 5;
        }
        return num == 1;
    }
};
