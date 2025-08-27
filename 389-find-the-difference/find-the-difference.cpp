class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int s1=0;
        for(int i=0;i<t.length();i++)
        {
            s1+=t[i];
        }
        for(int i=0;i<s.length();i++)
        {
            s1-=s[i];
        }
        return (char)s1;
    }
};