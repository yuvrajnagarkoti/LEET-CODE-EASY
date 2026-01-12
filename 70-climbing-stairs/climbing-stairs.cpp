class Solution {
public:
    int climbStairs(int n)
    {
        if(n<=2)
            return n;

        int low=1;
        int high=2;
        
        for(int i=3;i<=n;i++)
        {
            int temp=high;
            high=low+high;
            low=temp; 
        }
        return high;
    }
};