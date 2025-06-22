class Solution
{
public:
    int fib(int n)
    {
        if(n <= 1)
            return n;

        int p1 = 0;
        int p2 = 1;
        for(int i=1;i<n;i++)
        {
            int temp = p1 + p2;
            p1=p2;
            p2=temp;
        }
        return p2;
    }
};