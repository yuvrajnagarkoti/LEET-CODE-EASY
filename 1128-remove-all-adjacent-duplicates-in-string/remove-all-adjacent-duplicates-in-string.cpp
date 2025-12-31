class Solution {
public:
    string removeDuplicates(string s)
    {
        stack <char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
                continue;
            }
            if(stk.top() != s[i])
            {
                stk.push(s[i]);
            }
            else
            {
                stk.pop();
            }
        }

        string ans="";
        while( !stk.empty() )
        {
            char temp = stk.top();
            stk.pop();
            ans=ans+temp;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};