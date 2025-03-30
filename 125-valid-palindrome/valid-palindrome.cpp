class Solution
{
public:
    bool isPalindrome(string s)
    {
        string filtered;
        // Convert to lowercase and filter only alphanumeric characters
        for (char ch : s) 
        {
            if (isalnum(ch))
            {
                filtered += tolower(ch);
            }
        }
        // Two-pointer check for palindrome
        int left = 0, right = filtered.size() - 1;
        while (left < right)
        {
            if (filtered[left] != filtered[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};