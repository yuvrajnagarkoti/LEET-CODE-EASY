class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        return (goal + goal).find(s) != string::npos;
    }
};
