class Solution {
public:
    int maximum69Number (int num)
    {
        string a=to_string(num);
        for(auto &c:a)
        {
            if(c=='6')
            {
                c='9';
                break;
            }
        }
        return stoi(a);
    }
};