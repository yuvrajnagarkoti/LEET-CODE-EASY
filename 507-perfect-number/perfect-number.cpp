class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        vector<int> ans;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i == 0)
                ans.push_back(i);
        }
        for(auto it : ans)
        {
            num=num-it;
        }
        return num==0? true:false;
    }
};