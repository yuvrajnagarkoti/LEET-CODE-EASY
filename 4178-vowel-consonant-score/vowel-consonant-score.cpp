class Solution {
public:
    int vowelConsonantScore(string s)
    {
        int v=0,c=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] >= '0' && s[i] <= '9')  continue;
            else if(s[i] == ' ') continue;

            else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
        }
        if(c>0)
        {
            return floor(v/c);
        }
        return 0;
    }
};