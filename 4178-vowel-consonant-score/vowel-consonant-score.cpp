class Solution {
public:
    int vowelConsonantScore(string s)
    {
        int v=0,c=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            if(isalpha(s[i]))
                c++;
        }
        c=c-v;
        if(c>0)
        {
            return floor(v/c);
        }
        return 0;
    }
};