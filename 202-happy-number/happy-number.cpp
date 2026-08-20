class Solution 
{
public:

    int sumofdigits(int n)
    {
        int temp = 0;
        while(n>0)
        {
            int t=n%10;
            n = n/10;
            temp += t*t;
        }
        return temp;
    }

    bool isHappy(int n)
    {
        unordered_map<int,int> mpp;
        while(mpp.find(n) == mpp.end() && n != 1)
        {
            mpp[n] = 1;
            n = sumofdigits(n);
        }

        if(n==1)
            return true;
        return false;
    }
};