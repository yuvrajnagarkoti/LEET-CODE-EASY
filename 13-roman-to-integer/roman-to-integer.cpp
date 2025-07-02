class Solution {
public:
    int romanToInt(string s)
    {
        int i, num = 0;
        for (i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'I')
                num = num + 1;
            else if (s[i] == 'V')
            {
                num = num + 5;
                if (i > 0 && s[i - 1] == 'I') {
                    num = num - 1;
                    i--;
                }
            }
            else if (s[i] == 'X')
            {
                num = num + 10;
                if (i > 0 && s[i - 1] == 'I') {
                    num = num - 1;
                    i--;
                }
            }
            else if (s[i] == 'L')
            {
                num = num + 50;
                if (i > 0 && s[i - 1] == 'X') {
                    num = num - 10;
                    i--;
                }
            }
            else if (s[i] == 'C')
            {
                num = num + 100;
                if (i > 0 && s[i - 1] == 'X') {
                    num = num - 10;
                    i--;
                }
            }
            else if (s[i] == 'D')
            {
                num = num + 500;
                if (i > 0 && s[i - 1] == 'C') {
                    num = num - 100;
                    i--;
                }
            }
            else if (s[i] == 'M')
            {
                num = num + 1000;
                if (i > 0 && s[i - 1] == 'C') {
                    num = num - 100;
                    i--;
                }
            }
        }
        return num;
    }
};