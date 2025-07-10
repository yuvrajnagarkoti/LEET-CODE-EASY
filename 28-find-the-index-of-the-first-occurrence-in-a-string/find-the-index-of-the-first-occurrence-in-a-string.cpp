class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int i = 0, k = 0, start = -1;
        while (i < haystack.size())
        {
            if (haystack[i] == needle[k])
            {
                if (k == 0)
                    start = i; // Save the start index
                k++;
                i++;
                if (k == needle.size())
                    return start;
            }
            else
            {
                if (k > 0)
                {
                    i = start + 1; // Reset i to the next char after start
                    k = 0;
                    start = -1;
                }
                else
                {
                    i++;
                }
            }
        }
        return -1;
    }
};
