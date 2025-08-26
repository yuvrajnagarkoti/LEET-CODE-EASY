class Solution
{
    public:
    int maximum69Number (int num)
    {
        vector<int> ans;
        int flag=0;
        while(num > 0)
        {
            ans.push_back(num%10);
            num = num/10;
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(flag==0 && ans[i] == 6)
            {
                ans[i]=9;
                flag=1; 
            }
            num=num*10+ans[i];
        }
        return num;
    }
};