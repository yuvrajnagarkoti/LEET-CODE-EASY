class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        set<char> s1={'q','w','e','r','t','y','u','i','o','p'};
        set<char> s2={'a','s','d','f','g','h','j','k','l'};
        set<char> s3={'z','x','c','v','b','n','m'};
        vector<string> ans;

        for (string w : words) 
        {
            string temp = w;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            set<char>* row;
            if (s1.count(temp[0]))
                row = &s1;
            else if (s2.count(temp[0]))
                row = &s2;
            else
                row = &s3;
            bool ok = true;
            for (char c : temp)
            {
                if (row->find(c) == row->end())
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans.push_back(w);
        }
        return ans;
    }
};
