class Solution
{

    public:
    string common(string ans,string s)
    {
        int i=0;
        while(i<ans.length() && i<s.length())
        {
            if(ans[i] != s[i])
                break;
            i++;
        }

        if(i>=ans.length())
            return ans;
        
        return ans.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans = strs[0];
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            ans = common(ans,strs[i]);
        }

        return ans;
    }
};