class Solution {
public:
    int strStr(string haystack, string needle)
    {
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i] == needle[0] && i+needle.size() <= haystack.size())
            {
                string s = haystack.substr(i,needle.size());
                if(s == needle)
                    return i;
            }
        }    

        return -1;
    }
};