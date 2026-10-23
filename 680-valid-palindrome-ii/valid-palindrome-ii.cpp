
class Solution {
public:
    bool validPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        int c1 = 0, c2 = 0;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                if(c1 == 0)
                    i++;
                else
                {
                    i++;
                    j--;
                }
                c1++;
            }
            else
            {
                i++;
                j--;
            }
        }

        i = 0, j = s.length() - 1;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                if(c2 == 0)
                    j--;
                else
                {
                    i++;
                    j--;
                }
                c2++;
            }
            else
            {
                i++;
                j--;
            }
        }

        return min(c1, c2) <= 1;
    }
};