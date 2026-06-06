class Solution
{
    public:
    bool rec(int n,long long start)
    {
        if(start > n)
            return false;
        if(start == n)
            return true;
        
        return rec(n,start*3);
    }
    bool isPowerOfThree(int n)
    {
        if(n==1)
            return true;
        if(n<=0 || n%3 != 0)
            return false;
        return rec(n,1);
    }
};