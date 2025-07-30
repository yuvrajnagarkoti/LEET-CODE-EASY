class Solution {
public:
    char repeatedCharacter(string s)
    {
        int mpp[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]-'a']++;
            if(mpp[s[i]-'a'] == 2)
                return s[i];
        }
        return '0';
    }
};
