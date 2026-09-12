class Solution {
public:
    int longestValidParentheses(string s)
    {
        if(s.length() <= 1)
            return 0;
        int ans=0;
        int l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(') l++;
            else    r++;
        
            if(l==r)
                ans = max(ans,l+r);
            else if(r>l)
                r=l=0;
        }
        l=r=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] == '(') l++;
            else    r++;
        
            if(l==r)
                ans = max(ans,l+r);
            else if(l>r)
                r=l=0;
        }

        return ans;
    }
};