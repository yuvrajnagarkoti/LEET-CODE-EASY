class Solution
{
    public:
    string reverseOnlyLetters(string s)
    {
        int i=0,j=s.length();
        while( i<j )
        {
            while( i<j && (s[i]<'a'||s[i]>'z') && (s[i]<'A'||s[i]>'Z') ) 
            {
                i++;
            }
            while( j>i && (s[j]<'a'||s[j]>'z') && (s[j]<'A'||s[j]>'Z') )
            {
                j--;
            }
            char t=s[i];
            s[i++]=s[j];
            s[j--]=t;
        }
        return s;
    }
};