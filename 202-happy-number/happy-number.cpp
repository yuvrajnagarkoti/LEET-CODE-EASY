class Solution
{
public:
    static int digs(int n)
    {
        int sum=0;
        while(n>0)
        {
            int t=n%10;
            sum=sum + (t*t);
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        int slow=n;
        int fast=n;
        while(fast != 1)
        {
            slow=digs(slow);
            fast=digs(fast);
            fast=digs(fast);
            if(slow == fast && fast != 1)
            {
                return false;
            }
        }
        return true;
    }
};