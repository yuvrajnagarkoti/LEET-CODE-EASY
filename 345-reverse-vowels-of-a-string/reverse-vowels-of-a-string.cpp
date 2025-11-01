class Solution {
    private:
    bool isavowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u' ||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    public:
    string reverseVowels(string s)
    {
        int i=0,j=s.length()-1;
        while(i < j)
        {
            if(!isavowel(s[i]))
                i++;
            else if(!isavowel(s[j]))
                j--;
            else
            {
                swap(s[i],s[j]);
                i++;j--;
            }
        }
        return s;
    }
};