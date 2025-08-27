class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
        vector<int> ans;
        int k=0;
        for(auto word : words)
        {
            for(int i=0;i<word.length();i++)
            {
                if(word[i] == x)
                {
                    ans.push_back(k);
                    break;
                }
            }
            k++;
        }
        return ans;
    }
};