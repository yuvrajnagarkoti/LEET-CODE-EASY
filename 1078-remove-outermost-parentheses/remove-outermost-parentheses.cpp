class Solution {
public:
    string removeOuterParentheses(string s)
    {
        string ans="";
        int count=0,temp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
                count++;
            else
                count--;
            
            if(count == 0)
            {
                ans = ans + s.substr(temp+1,i-temp-1);
                temp=i+1;
            }
        }
        return ans;
    }
};