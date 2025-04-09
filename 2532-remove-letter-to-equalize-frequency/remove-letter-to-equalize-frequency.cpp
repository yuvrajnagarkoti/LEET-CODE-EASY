class Solution {
public:
    bool equalFrequency(string word)
    {
        vector<int> v1(26, 0);
        for(char c: word)
        {
            v1[c-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            char c = i+'a';
            set<int> temp;
            if(v1[i] > 0)
            {
                for(int j=0; j<26; j++)
                {
                    if(j == i)
                    {
                        if(v1[j] > 1)
                        {
                            temp.insert(v1[j]-1);
                        }
                    }
                    else
                    {
                        temp.insert(v1[j]);
                    }
                }
            }
            if(temp.size() == 0){
                continue;
            }
            if(temp.size()-1 <= 1){
                return true;
            }
        }
        return false;
    }
};