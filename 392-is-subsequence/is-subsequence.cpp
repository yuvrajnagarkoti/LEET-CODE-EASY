class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        if(s==t)
            return true;
        
        int i=0,j=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        if(i == s.length())
            return true;
        return false;
    }
};