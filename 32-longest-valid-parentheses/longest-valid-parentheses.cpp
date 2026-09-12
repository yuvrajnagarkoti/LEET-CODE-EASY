class Solution {
public:
    int longestValidParentheses(string s)
    {
        stack<pair<char,int>> st;
        int n=s.length();
        int ans=0;

        st.push({')',-1});

        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                st.push({'(',i});
            else
            {
                if(st.top().first == ')')
                {
                    st.push({')',i});
                }
                else
                {
                    st.pop();

                    ans = max(ans,i-st.top().second);
                }
            }
        }
        return ans;
    }
};