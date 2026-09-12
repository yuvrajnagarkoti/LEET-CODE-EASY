class Solution {
public:
    int longestValidParentheses(string s)
    {
        stack<pair<char,int>> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                st.push({'(',i});
            else
            {
                if(st.empty() || st.top().first == ')')
                    st.push({')',i});
                else 
                    st.pop();
            }
        }
        if(st.empty())
            return n;
        
        vector<int> ans;
        ans.push_back(n);
        while( ! st.empty())
        {
            ans.push_back(st.top().second);
            st.pop();
        }
        ans.push_back(-1);

        int a=0;
        for(int i=0;i<ans.size()-1;i++)
        {
            a = max(a,ans[i]-ans[i+1]-1);
        }

        return a;
    }
};