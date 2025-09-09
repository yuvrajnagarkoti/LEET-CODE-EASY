class Solution {
public:
    bool isValid(string s)
    {
        stack <char> stk;
        for(auto it : s)
        {
            if(stk.empty())
            {
                if(it==')' || it=='}' || it==']')
                {
                    return false;
                }
                stk.push(it);
            }
            else if(it==')')
            {
                if(stk.top()!='(')
                    return false;
                stk.pop();
            }
            else if(it=='}')
            {
                if(stk.top()!='{')
                    return false;
                stk.pop();
            }
            else if(it==']')
            {
                if(stk.top()!='[')
                    return false;
                stk.pop();
            }
            else
                stk.push(it);
        }
        if(stk.empty())
            return true;
        return false;
    }
};