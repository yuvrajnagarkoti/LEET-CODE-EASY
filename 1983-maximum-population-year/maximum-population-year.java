class Solution {
    public int maximumPopulation(int[][] logs)
    {
        int []count = new int[1001];
        int n=logs.length;
        for(int i=0;i<n;i++)
        {
            int low=logs[i][0];
            int high=logs[i][1];
            for(int j=low;j<high;j++)
            {
                count[j-1950]++;
            }
        }
        int mval=count[0];
        int year=1950;
        for(int i=0;i<1001;i++)
        {
            if(count[i] > mval)
            {
                year=1950+i;
                mval = count[i];
            }
        }

        return year;
    }
}