class Solution {
public:
    int numberOfSpecialChars(string word)
    {
        int count=0;
        unordered_map<char,int> mpp;
        for(int i=0;i<word.length();i++)
        {
            mpp[word[i]]++;
        }
        for(int i=0;i<26;i++)
        {
            if(mpp.find('a'+i) != mpp.end()  && mpp.find('A'+i) != mpp.end())
            {
                count++;
            }
        }
        return count;
    }
};