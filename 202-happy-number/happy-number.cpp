class Solution {
public:
    bool isHappy(int n)
    {
        int i,sum,d,flag=1;
        while(flag)
        {
            sum = 0;
            while(n > 0)
            {
                d = n%10;
                n = n/10;
                sum = sum + pow(d,2);
            }
            n=sum;
            if(sum < 10) flag=0;
        }
        if(sum == 1 || sum == 7) return true;
        return false;
    }
};