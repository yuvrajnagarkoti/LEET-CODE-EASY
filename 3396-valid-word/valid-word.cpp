class Solution {
public:
    bool isValid(string word)
    {
        if (word.length() < 3)
            return false;

        int vowels = 0, consonants = 0;
        for (char ch : word) {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else if (isalpha(ch))
                consonants++;
            else if (isdigit(ch))
                continue;
            else
                return false;
        }
        return vowels > 0 && consonants > 0;
    }
};
