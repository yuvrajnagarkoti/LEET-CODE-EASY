class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int i,c[26] = {0};
        for(i=0 ; i<s.length() ; i++ )
        {
            if(c[int(s[i])-'a'] == 1)
                break;
            else
                c[int(s[i])-'a'] =1;
        }
        return s[i];
    }
};