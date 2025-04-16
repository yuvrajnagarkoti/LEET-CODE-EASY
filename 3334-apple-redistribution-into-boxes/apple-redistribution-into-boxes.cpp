class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity)
    {
        int i;
        for(i=1;i<apple.size();i++) apple[0]=apple[0]+apple[i];
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(i=0;i<capacity.size();i++)
        {
            apple[0]=apple[0]-capacity[i];
            if(apple[0] <= 0)
                return i+1;
        }
        return 0;
    }
};