class Solution
{
    public:
    bool check(int i,int t)
    {
        int sum=1;
        while(i>0)
        {
            int temp = i%10;
            sum = sum * temp;
            i=i/10;
        }
        if(sum%t == 0) return true;
        return false;
    }

    int smallestNumber(int n, int t)
    {
        int i=n;
        while(true)
        {
            if(check(i,t))
                return i;
            i++;
        }
        return n;
    }
};