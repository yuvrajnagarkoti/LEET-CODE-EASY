class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr)
    {
        set <int> s;
        for(int i=0;i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        map<int,int> mpp;
        int k=1;
        for(auto it : s)
        {
            mpp[it]=k;
            k++;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};