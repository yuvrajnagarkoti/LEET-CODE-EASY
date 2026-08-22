class Solution {
public:
    bool checkDivisibility(int n)
    {
        int pro=1,sum=0;
        int t=n;
        while(n>0)
        {
            int temp = n%10;
            n = n/10;
            pro = pro * temp;
            sum = sum + temp;
        }
        sum += pro;

        if(t%sum==0)
            return true;
        return false;
    }
};