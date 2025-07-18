class Solution
{
public:
    int firstUniqChar(string s)
    {
        int i,j,count[26]={0};
        for(i=0;i<s.size();i++)
        {
            count[s[i] - 'a']++;
        }
        for(i=0;i<s.size();i++)
        {
            if(count[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};