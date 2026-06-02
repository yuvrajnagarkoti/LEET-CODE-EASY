class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration)
    {
        int ans=INT_MAX;
        int n=landStartTime.size(),m=waterStartTime.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ls=landStartTime[i];
                int le = ls+landDuration[i];
                int ws = waterStartTime[j];
                int we = ws+waterDuration[j];
                if(le <= ws || we<=ls)
                {
                    ans = min(ans,max(le,we));
                }
                else
                {
                    if(ls < ws)
                    {
                        int temp = le;
                        if(le >= ws)
                            temp += waterDuration[j];
                        else
                            temp = we;
                        ans = min(ans,temp);
                    }
                    else
                    {
                        int temp = we;
                        if(we >= ls)
                            temp += landDuration[i];
                        else
                            temp = le;
                        ans = min(ans,temp);
                    }
                }
            }
        }    
        return ans;
    }
};