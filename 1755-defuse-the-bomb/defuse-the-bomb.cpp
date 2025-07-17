class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k)
    {
        int i, n = code.size();
        vector<int> ans(n, 0);
        if (k == 0) return ans;
        int sum = 0;
        if (k > 0)
        {
            for (i = 1; i <= k; i++)
            {
                sum += code[i];
            }
            ans[0] = sum;
            for (i = 1; i < n; i++)
            {
                sum = sum - code[i] + code[(i + k) % n];
                ans[i] = sum;
            }
        }
        else
        {
            k = -k; 
            for (i = 0; i < k; i++)
            {
                sum += code[ (n-1-i)%n ];
            }
            ans[0] = sum;
            for (i = 1; i < n; i++)
            {
                sum = sum - code[ (i-k-1+n)%n ] + code[ (i-1+n)%n ];
                ans[i] = sum;
            }
        }
        return ans;
    }
};