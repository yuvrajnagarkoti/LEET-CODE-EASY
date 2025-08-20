class Solution
{
    public:
    int romanToInt(string s)
    {
        int i=0,ans=0,n=s.length();
        map <char,int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        while(i<n)
        {
            if(i<n-1 && mpp[s[i]] < mpp[s[i+1]] )
                ans=ans-mpp[s[i]];
            else
                ans=ans+mpp[s[i]];
            i++;
        }
        return ans;
    }
};