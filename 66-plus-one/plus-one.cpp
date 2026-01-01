class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        stack<int> stk;
        vector<int> ans;
        for(int i=0;i<digits.size();i++)
        {
            stk.push(digits[i]);
        }
        int flag=1;
        while(!stk.empty())
        {
            int temp = stk.top();
            stk.pop();
            if(flag == 1)
            {
                temp=temp+1;
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
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};