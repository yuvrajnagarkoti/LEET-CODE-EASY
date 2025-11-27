class Solution {
public:
    int findComplement(int num)
    {
        string s = "";
        while(num > 0)
        {
            s += (num % 2) + '0';
            num /= 2;
        }
        reverse(s.begin(), s.end());

        for(auto &c : s)
            c = (c == '0' ? '1' : '0');

        return stoi(s, 0, 2);
    }
};