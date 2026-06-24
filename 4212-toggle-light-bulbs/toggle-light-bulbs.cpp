class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs)
    {
        sort(bulbs.begin(),bulbs.end());
        int n=bulbs.size();
        int sw =0,prev=bulbs[0];
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(prev == bulbs[i])
            {
                sw = 1^sw;
            }
            else
            {
                if(sw == 1)
                    ans.push_back(prev);
                sw = 1;
                prev = bulbs[i];
            }
        }
        if(sw == 1)
            ans.push_back(prev);
        return ans;
    }
};