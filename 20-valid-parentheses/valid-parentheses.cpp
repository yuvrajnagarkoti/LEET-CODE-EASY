class Solution {
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(stk.empty())
            {
                if(s[i] == ')' || s[i] == ']' || s[i] == '}')
                    return false;
                else
                    stk.push(s[i]);
            }
            else
            {
                char temp=stk.top();
                if(s[i] == '(' || s[i] == '[' || s[i] =='{')
                {
                    stk.push(s[i]);
                }
                else if( (s[i] == ')' && temp == '(') || 
                    (s[i] == ']' && temp == '[') ||
                    (s[i] =='}'  && temp =='{') )
                {
                        stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(!stk.empty())
            return false;
        return true;
    }
};