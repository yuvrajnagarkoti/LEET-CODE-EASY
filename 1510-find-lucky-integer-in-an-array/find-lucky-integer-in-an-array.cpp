class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        int i,flag=0,lucky;
        map <int,int> mpp;
        for(i=0;i<arr.size();i++)
        {
            mpp[ arr[i] ]++;
        }

        for(auto it: mpp)
        {
            if(it.second == it.first)
            {
                flag = 1;
                lucky = it.first;
            }
        }

        return flag == 0 ? -1 : lucky;
    }
};