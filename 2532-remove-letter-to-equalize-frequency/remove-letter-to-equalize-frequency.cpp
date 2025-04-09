class Solution
{
public:
    bool equalFrequency(string word)
    {
        int freq[26] = {0};
        for (int i = 0; i < word.length(); i++)
        {
            freq[word[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0) continue;
            freq[i]--;
            int equal = -1;
            bool ok = true;
            for (int j = 0; j < 26; j++)
            {
                if (freq[j] == 0) continue;
                if (equal == -1)
                    equal = freq[j];
                else if (freq[j] != equal) {
                    ok = false;
                    break;
                }
            }
            freq[i]++;
            if (ok) return true;
        }
        return false;
    }
};