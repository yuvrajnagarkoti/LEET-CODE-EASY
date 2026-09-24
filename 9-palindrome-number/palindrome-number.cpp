class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        string s = "";
        while (x > 0)
        {
            int temp = x % 10;
            s += char('0' + temp);  // FIXED
            x /= 10;
        }

        for (int i = 0, j = s.length() - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
                return false;
        }

        return true;
    }
};