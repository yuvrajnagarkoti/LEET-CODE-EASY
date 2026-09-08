class Solution {
public:
    string removeOuterParentheses(string s)
    {
        stack<char> st;
        string ans="";
        int temp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
                st.push('(');
            else
                st.pop();
            
            if((int)st.size() == 0)
            {
                ans = ans + s.substr(temp+1,i-temp-1);
                temp=i+1;
            }
        }
        return ans;
    }
};