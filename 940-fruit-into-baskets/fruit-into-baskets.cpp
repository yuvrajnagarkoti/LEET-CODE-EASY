class Solution {
public:
    int totalFruit(vector<int>& fruits)
    {
        unordered_map<int,int> mpp;
        int low=0,count=0;
        for(int i=0;i<fruits.size();i++)
        {
            mpp[fruits[i]]++;
            if(mpp.size() <= 2)
            {
                count=max(count, i-low+1);
            }
            if(mpp.size() > 2)
            {
                while(mpp.size() > 2)
                {
                    mpp[fruits[low]]--;
                    if(mpp[fruits[low]] == 0)
                        mpp.erase(fruits[low]);
                    low++;
                }
            }
        }
        return count;
    }
};