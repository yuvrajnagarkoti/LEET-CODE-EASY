class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int counter[26] = {0};
        for (char letter : magazine)
            counter[letter - 'a']++; 
        for (char letter : ransomNote)
        {
            if (counter[letter - 'a']-- <= 0)
                return false; 
        } 
        return true;
    }
};