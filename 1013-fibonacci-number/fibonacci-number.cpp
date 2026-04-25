class Solution
{
    public:
    int fib(int n)
    {
        int prev=1;
        int cur=2;
        if( n==0)
            return 0;
        if( n <= 2)
            return 1;

        for(int i=3;i<n;i++)
        {
            int next = prev + cur;
            prev = cur;
            cur = next;
        }
        return cur;
    }
};