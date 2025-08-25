class Solution {
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;

        if (s == goal)
        {
            int count[26] = {0};
            for (char ch : s) {
                if (++count[ch - 'a'] > 1) return true;
            }
            return false;
        }

        vector<int> diff;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        // Valid if exactly 2 mismatches and swapping fixes it
        return diff.size() == 2 && s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]];
    }
};
