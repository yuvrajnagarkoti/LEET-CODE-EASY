class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        int i,n=arr1.size();
        int count[1001] = {0};
        for(i=0;i<n;i++)
        {
            count[arr1[i]]++;
        }
        int k=0;
        for(i=0;i<arr2.size();i++)
        {
            while( count[arr2[i]] > 0)
            {
                arr1[k++] = arr2[i];
                count[arr2[i]]--;
            }
        }
        
        for(i=0;i<1001;i++)
        {
            while( count[i] > 0)
            {
                arr1[k++] = i;
                count[i]--;
            }
        }
        return arr1;
    }
};