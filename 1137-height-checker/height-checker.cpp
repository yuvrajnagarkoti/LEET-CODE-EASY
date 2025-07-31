class Solution
{
    public:
    int heightChecker(vector<int>& heights)
    {
        int i,n=heights.size(),count=0;
        vector<int> temp(heights.begin(),heights.end());
        sort(temp.begin(),temp.end());
        for(i=0;i<n;i++)
        {
            if(temp[i] != heights[i])
                count++;
        }
        return count;
    }
    
};