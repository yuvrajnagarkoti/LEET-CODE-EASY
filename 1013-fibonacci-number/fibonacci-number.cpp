class Solution
{
public:
    int rec(int i)
    {
        if(i == 0)
            return 0;
        if(i==1)
            return 1;
        
        return rec(i-1)+rec(i-2);
    }
    int fib(int n)
    {
        //memset(f,0,f.end());
        return rec(n);
    }
};