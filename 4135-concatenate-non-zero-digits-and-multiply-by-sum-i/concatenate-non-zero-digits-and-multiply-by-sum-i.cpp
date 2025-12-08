class Solution {
public:
    long long sumAndMultiply(int n)
    {
        string ans = "";
        long long sum = 0;
        while (n > 0)
        {
            int temp = n % 10;
            n = n / 10;
            if (temp != 0)
            {
                ans += char(temp + '0');
                sum += temp;
            }
        }
        if(ans.length()==0)
            return 0;
        reverse(ans.begin(), ans.end());
        long long ans1 = stoll(ans);
        return ans1 * sum;
    }
};
