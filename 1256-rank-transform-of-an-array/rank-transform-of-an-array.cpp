class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr)
    {
        if(arr.size() == 0)
            return arr;
        map <int,int> mpp;
        vector<int> a(arr.begin(),arr.end());
        sort(a.begin(),a.end());
        int k=1;
        mpp[a[0]]=k;
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1] != a[i])
            {
                ++k;
                mpp[a[i]]=k;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};