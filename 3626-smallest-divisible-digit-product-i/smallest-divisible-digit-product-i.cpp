class Solution 
{
public:

    int proofd(int n)
    {
        int ans=n%10;
        n=n/10;
        while(n>0)
        {
            ans = ans*(n%10);
            n = n/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t)
    {
        int ans=n;
        for(ans=n;ans<=n+10;ans++)
        {
            if(proofd(ans)%t == 0)
                return ans;
        }
        return ans;
    }
};