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
            int j=0;
            char temp;
            while( j < i)
            {
                temp = word[j];
                word[j]=word[i];
                word[i]=temp;
                i--;
                j++;
            }
        }
        return word;
    }
};