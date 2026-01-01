class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int flag=1;
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int temp = digits[i];
            if(flag==1)
            {
                temp++;
                flag=0;     
            }
            if(temp == 10)
            {
                temp=0;
                flag=1;
            }
            ans.push_back(temp);
        }
        if(flag==1)
            ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};