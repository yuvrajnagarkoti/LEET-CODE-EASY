class Solution
{
public:
    int fib(int n)
    {
        if(n <= 1)
            return n;
        int f=1;
        int s=1;
        int sum;
        n=n-2;
        while( n > 0)
        {
            sum = f + s;
            f = s;
            s = sum;
            n--;
        }
        return s;
    }
};