class Solution
{
public:
    int climbStairs(int n)
    {
        if(n<=3)
            return n;
        int p1 = 2;
        int p2 = 3;
        for(int i=3;i<n;i++)
        {
            int temp=p1+p2;
            p1=p2;
            p2=temp;
        }
        return p2;
    }
};