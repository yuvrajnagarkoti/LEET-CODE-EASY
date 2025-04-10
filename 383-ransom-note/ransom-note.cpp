class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int i;
        map <char,int> mpp;
        for(i=0;i<magazine.size();i++)
        {
            mpp[magazine[i]]++;
        }
        for(i=0;i<ransomNote.size();i++)
        {
            mpp[ransomNote[i]]--;
        }
        for(auto m : mpp)
        {
            if(m.second < 0)
                return false;
        }
        return true;
    }
};