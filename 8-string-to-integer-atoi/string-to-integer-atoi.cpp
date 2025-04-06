class Solution {
public:
    int myAtoi(string s)
    {
        int i = 0, sign = 1;
        long sum = 0;
        // Skip leading whitespaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        // Handle optional sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        // Convert digits to number
        while (i < s.length() && isdigit(s[i]))
        {
            sum = sum * 10 + (s[i] - '0');
            // Handle overflow
            if (sign == 1 && sum > INT_MAX) return INT_MAX;
            if (sign == -1 && -sum < INT_MIN) return INT_MIN;
            i++;
        }
        return sign * sum;
    }
};
