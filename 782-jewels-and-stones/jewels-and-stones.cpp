class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int i,count=0;
        map <char,int> mpp;
        for(i=0;i<jewels.length();i++)
        {
            mpp[ jewels[i] ]++;
        }
        for(i=0;i<stones.length();i++)
        {
            if( mpp[stones[i]] > 0)
            {
                count++;
            }
        }
        return count;
    }
};