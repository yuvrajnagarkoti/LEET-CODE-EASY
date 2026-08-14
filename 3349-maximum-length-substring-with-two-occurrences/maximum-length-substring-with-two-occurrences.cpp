class Solution {
public:
    int maximumLengthSubstring(string s)
    {
        vector<int> count(26,0);
        int i=0,j=0,n=s.length();
        int ans = 0;
        while(j<n)
        {
            int idx = s[j]-'a';
            count[idx]++;

            if(count[idx] <= 2)
            {
                ans = max(ans,j-i+1);
            }
            else
            {
                while(count[idx] > 2 && i<=j)
                {
                    count[s[i]-'a']--;
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};