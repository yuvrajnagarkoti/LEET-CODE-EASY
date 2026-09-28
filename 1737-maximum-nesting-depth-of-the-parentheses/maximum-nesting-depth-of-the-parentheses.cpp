class Solution {
public:
    int maxDepth(string s)
    {
        stack<char> st;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
                ans = max(ans,(int)st.size());
            }
            if(s[i] == ')')
            {
                st.pop();
            }
        }
        return ans;
    }
};