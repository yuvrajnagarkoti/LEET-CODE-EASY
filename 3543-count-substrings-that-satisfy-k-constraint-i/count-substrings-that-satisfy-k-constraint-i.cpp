class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.length();
        int count = 0;
        int i = 0;
        int zeroCount = 0;
        int oneCount = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                zeroCount++;
            }
            else
            {
                oneCount++;
            }

            while (zeroCount > k && oneCount > k)
            {
                if (s[i] == '0') {
                    zeroCount--;
                } else {
                    oneCount--;
                }
                i++;
            }
            count += (j - i + 1);
        }
        return count;
    }
};