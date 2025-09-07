class Solution {
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans(n,0);
        if(n%2 == 0)
        {
            int i=0;
            while(i<n)
            {
                int c=i;
                ans[i++]= c+1;
                ans[i++]= -(c+1);
            }
        }
        else
        {
            int i=0;
            while(i<n-1)
            {
                int c=i;
                ans[++i]=c+1;
                ans[++i]=-(c+1);
            }
        }
        return ans;
    }
};