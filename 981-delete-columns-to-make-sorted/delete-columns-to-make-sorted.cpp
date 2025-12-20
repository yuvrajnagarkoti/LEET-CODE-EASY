class Solution {
public:
    int minDeletionSize(vector<string>& strs)
    {
        int count=0;
        int n=strs.size();
        int w=strs[0].length();
        for(int i=0;i<w;i++)
        {
            int maxc = strs[0][i];
            for(int j=0;j<n;j++)
            {
                if(strs[j][i] < maxc)
                {
                    count++;
                    break;
                }
                if( strs[j][i] > maxc )
                    maxc = strs[j][i];
            }
        }
        return count;
    }
};