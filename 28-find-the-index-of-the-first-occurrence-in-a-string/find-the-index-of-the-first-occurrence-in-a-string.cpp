class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int length = needle.size(); 
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack.substr(i,length) == needle)
            {
                return i; 
            }
        }
        return -1; 
    }
};