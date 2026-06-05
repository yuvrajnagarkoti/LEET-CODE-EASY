class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits)
    {
        sort(digits.begin(),digits.end());
        vector<int> ans;
        unordered_set<int> st;
        int n=digits.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(k==i || k==j || j==i)
                        continue;
                    int num = ( (digits[i]*100)+(digits[j]*10)+(digits[k]));
                    if(num >=100 && num%2 == 0 && st.find(num) == st.end())
                        ans.push_back(num);
                    st.insert(num);
                }
            }
        }
        
        return ans;
    }
};