class Solution {
public:
    string minRemoveToMakeValid(string s)
    {
        string ans="";
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
                ans.push_back(s[i]);
            }
            else if(s[i] == ')')
            {
                if( !st.empty())
                {
                    st.pop();
                    ans.push_back(s[i]);
                }      
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        if(st.empty())
            return ans;
        string a="";
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i] == '(' && (int)st.size() > 0)
            {
                st.pop();
            }
            else
            {
                a.push_back(ans[i]);
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }
};