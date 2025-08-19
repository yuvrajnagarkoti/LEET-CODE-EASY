class Solution {
public:
    int climbStairs(int n)
    {
        if(n==1)
            return 1;
        int t1=1,t2=2;
        for(int i=2;i<n;i++)
        {
            int temp = t1 + t2;
            t1=t2;
            t2=temp;
        }
        return t2; 
    }
};