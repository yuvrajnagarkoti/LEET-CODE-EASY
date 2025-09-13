class Solution
{
    public:
    int maxFreqSum(string s)
    {
        int count[26]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-'a']++;
        }
        int m1=0,m2=0;
        for(int i=0;i<26;i++)
        {
            if(i==0 || i==4 || i==8 || i==14 || i==20)
            {
                if(m1 < count[i])
                    m1=count[i];
            }
            else
            {
                if(m2 < count[i])
                    m2=count[i];
            }
        }
        return m1+m2;
    }
};