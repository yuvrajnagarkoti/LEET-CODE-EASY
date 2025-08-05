class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int i,n=word.length();
        for(i=0;i<n;i++)
        {
            if( word[i] == ch)
                break;
        }
        if(word[i] == ch)
        {
            string ans=word.substr(0,i+1);
            reverse(ans.begin(),ans.end());
            ans=ans+word.substr(i+1,n);
            return ans;
        }
        return word;
    }
};