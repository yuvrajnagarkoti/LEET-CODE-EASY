class Solution {
public:
    int fib(int n)
    {
        if(n <= 1)
            return n;
        int prev=0;
        int cur=1;
        for(int i=2;i<=n;i++)
        {
            int temp = cur;
            cur = cur + prev;
            prev = temp;
        }
        return cur;
    }
};