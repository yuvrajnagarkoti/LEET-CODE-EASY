class Solution {
public:
    bool isValid(string word)
    {
        int i,con=0,vow=0;
        if(word.length() < 3)
            return false;
        for( i=0;i<word.length();i++ )
        {
            char ch = tolower(word[i]);
            if( ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                con++;
            else if( ch >= 'a' && ch <='z')
                vow++;
            else if( ch >= '0' && ch<='9');
            else
                return false;
        }
        if( con != 0 && vow != 0)
            return true;
        return false;
    }
};