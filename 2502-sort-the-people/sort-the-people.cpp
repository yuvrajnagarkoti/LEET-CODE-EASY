class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights)
    {
        int i,j,n=names.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(heights[i] < heights[j])
                {
                    swap(heights[i],heights[j]);
                    swap(names[i],names[j]);
                }
            }
        }
        return names;
    }
};