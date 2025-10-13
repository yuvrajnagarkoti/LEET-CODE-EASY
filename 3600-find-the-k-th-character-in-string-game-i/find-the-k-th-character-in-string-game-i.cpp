class Solution
{
    public:
    void tillk(string &word,int k)
    {
        string w="";
        if(word.length() >= k)
            return;
        for(int i=0;i<word.length();i++)
        {
            if( word[i] == 'z')
                w+='a';
            else
                w+= word[i]+1;
        }
        word=word+w;
        tillk(word,k);
    }

    char kthCharacter(int k)
    {
        string word="a";
        tillk(word,k);
        return word[k-1];
    }
};