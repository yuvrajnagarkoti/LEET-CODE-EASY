class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        vector<string> ans;
        set<char> s1={'q','w','e','r','t','y','u','i','o','p'};
        set<char> s2={'a','s','d','f','g','h','j','k','l'};
        set<char> s3={'z','x','c','v','b','n','m'};
        for(string it:words)
        {
            string temp = it;
            int flag=1;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            if(s1.find(temp[0]) != s1.end())
            {
                for(int i=0;i<temp.length();i++)
                {
                    if(s1.find(temp[i]) == s1.end())
                    {
                        flag=0;
                        break;
                    }
                }
            }
            else if(s2.find(temp[0]) != s2.end())
            {
                for(int i=0;i<temp.length();i++)
                {
                    if(s2.find(temp[i]) == s2.end())
                    {
                        flag=0;
                        break;
                    }
                }
            }
            else if(s3.find(temp[0]) != s3.end())
            {
                for(int i=0;i<temp.length();i++)
                {
                    if(s3.find(temp[i]) == s3.end())
                    {
                        flag=0;
                        break;
                    }
                }
            }

            if(flag)
                ans.push_back(it);
        }
        return ans;
    }
};