class Solution {
public:
    char kthCharacter(int k)
    {
        string word = "a";
        while( word.length() < k)
        {
            string w="";
            for(int i=0;i<word.length();i++)
            {
                if(word[i] == 'z')
                    w += 'a';
                else
                    w += word[i]+1;
            }
            word=word+w;
        }
        return word[k-1];
    }
};