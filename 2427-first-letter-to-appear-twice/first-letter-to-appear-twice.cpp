class Solution
{
    public:
        char repeatedCharacter(string s)
        {
            string s1;
            char ans;
            for(int i=0;i<s.size();i++)
            {
                if(find(s1.begin(),s1.end(),s[i])!=s1.end())
                {
                    ans=s[i];
                    break;
                }
                else s1.push_back(s[i]);
            }
            return ans;
        }
};