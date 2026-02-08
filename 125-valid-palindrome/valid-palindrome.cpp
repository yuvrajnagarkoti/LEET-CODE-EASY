class Solution {
public:
    bool isPalindrome(string s)
    {
        int low = 0, high = s.length() - 1;

        while(low < high)
        {
            while(low < high && !isalnum(s[low]))
                low++;

            while(low < high && !isalnum(s[high]))
                high--;

            if(tolower((unsigned char)s[low]) != tolower((unsigned char)s[high]))
                return false;
            
            low++;
            high--;
        }
        return true;
    }
};
