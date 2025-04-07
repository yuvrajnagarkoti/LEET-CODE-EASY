class Solution {
public:

    string common(string s1,string s2)
    {
        int i,n=min(s1.length(),s2.length());
        string ans;
        for(i=0; i<n ;i++)
        {
            if(s1[i] == s2[i])
            {
                ans=ans+s1[i];
            }
            else
                return ans;
        }
        return ans;
    }

    string longestCommonPrefix(vector<string>& strs)
    {
        int i,n=strs.size();
        if(n < 2) return strs[0];
        string ans = common(strs[0],strs[1]);
        for(i=2;i<n;i++)
        {
            if(ans.empty())
            {
                return ans;
            }
            ans=common(ans,strs[i]);
        }
        return ans;
    }
};