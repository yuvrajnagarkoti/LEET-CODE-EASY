class Solution {
public:
    int longestPalindrome(string s)
    {
        unordered_map<char,int> mpp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        int oddc=0;
        int ans=0;
        for(auto it : mpp)
        {
            if(it.second%2 == 0)
                ans += it.second;
            else
            {
                ans += it.second-1;
                oddc=1;
            }
        }

        return ans+oddc;
    }
};