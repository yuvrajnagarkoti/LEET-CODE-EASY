class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        sort(arr.begin() , arr.end());
        int i,j,min=INT_MAX;
        vector <vector<int>> ans;
        for( i = 0 , j = 1 ; j < arr.size() ; i++ , j++)
        {
            if(min > (arr[j]-arr[i]) )
            {
                min = arr[j]-arr[i];
            }
        }
        int c = 0;
        for( i = 0 , j = 1 ; j < arr.size() ; i++ , j++ )
        {
            if( (arr[j] - arr[i]) == min)
            {
                ans.push_back( {arr[i], arr[j]} );
            } 
        }
        return ans;
    }
};