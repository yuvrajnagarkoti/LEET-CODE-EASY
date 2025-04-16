class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity)
    {
        int i,sum=0;
        for(i=0;i<apple.size();i++) sum=sum+apple[i];
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(i=0;i<capacity.size();i++)
        {
            sum=sum-capacity[i];
            if(sum <= 0)
                return i+1;
        }
        return 0;
    }
};