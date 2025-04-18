class Solution {
public:
    char repeatedCharacter(string s)
    {
        int freq[26] = {0};
        for (char ch : s)
        {
            if (freq[ch - 'a']) return ch;
            freq[ch - 'a'] = 1;
        }
        return '\0';
    }
};
