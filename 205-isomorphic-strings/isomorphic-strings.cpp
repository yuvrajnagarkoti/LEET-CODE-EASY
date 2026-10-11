class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        vector<int> c1(256, -1), c2(256, -1);

        for (int i = 0; i < s.length(); i++)
        {
            if (c1[s[i]] != c2[t[i]])
                return false;

            c1[s[i]] = i;
            c2[t[i]] = i;
        }

        return true;
    }
};