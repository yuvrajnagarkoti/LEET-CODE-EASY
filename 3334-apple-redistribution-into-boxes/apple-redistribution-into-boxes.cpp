class Solution
{
public:
    static bool compare(int a ,int b)
    {
        return a>b;
    }
    int minimumBoxes(vector<int>& apple, vector<int>& capacity)
    {
        int sum=0;
        for(int i=0;i<apple.size();i++)
        {
            sum=sum+apple[i];
        }
        sort(capacity.begin(),capacity.end(),compare);
        for(int i=0;i<capacity.size();i++)
        {
            sum=sum-capacity[i];
            if(sum <= 0)
            {
                return i+1;
            }
        }
        return -1;
    }
};