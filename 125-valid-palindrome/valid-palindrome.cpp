class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            char a = s[i];
            char b = s[j];
            if(!isalnum(a))
            {
                i++;
                continue;
            }
            if(!isalnum(b))
            {
                j--;
                continue;
            }

            if(tolower(a) != tolower(b))
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};