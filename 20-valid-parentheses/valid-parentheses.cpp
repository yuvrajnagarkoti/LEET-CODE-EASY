class Solution {
public:
    bool isValid(string str)
    {
        int i;
        stack <char> s;
        for(i=0;i<str.length();i++)
        {
            if(str[i] == '(')
                s.push(str[i]);
            else if(str[i] == '[')
                s.push(str[i]);
            else if(str[i] == '{')
                s.push(str[i]);
            
            else if(str[i] == '}'  && !s.empty())
            {
                if(s.top() == '{')
                    s.pop();
                else
                    return false;
            }
            else if(str[i] == ')'  && !s.empty())
            {
                if(s.top() == '(')
                    s.pop();
                else
                    return false;
            }
            else if(str[i] == ']' && !s.empty())
            {
                if(s.top() == '[')
                    s.pop();
                else
                    return false;
            }
            else
                return false;
        }
        return s.empty();
    }
};