class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        int i;
        int count[501] = {0};
        for(i=0;i<arr.size();i++)
        {
            count[arr[i]]++;
        }

        for(i=500;i>=1;i--)
        {
            if( count[i] == i)
                return i;
        }
        return -1;
    }
};