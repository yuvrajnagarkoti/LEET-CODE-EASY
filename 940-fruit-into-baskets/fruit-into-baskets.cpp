class Solution {
public:
    int totalFruit(vector<int>& fruits)
    {
        map<int,int> mpp;
        int low=0,count=0,sum=0;
        for(int i=0;i<fruits.size();i++)
        {
            mpp[fruits[i]]++;
            sum++;
            if(mpp.size() <= 2)
            {
                count=max(count, sum);
            }
            if(mpp.size() > 2)
            {
                while(mpp.size() > 2)
                {
                    mpp[fruits[low]]--;
                    if(mpp[fruits[low]] == 0)
                        mpp.erase(fruits[low]);
                    low++;
                    sum--;
                }
            }
        }
        return count;
    }
};