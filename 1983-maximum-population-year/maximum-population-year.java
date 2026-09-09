class Solution {
    public int maximumPopulation(int[][] logs)
    {
        int []count = new int[2051];
        for(int i=0;i<logs.length;i++)
        {
            int low=logs[i][0];
            int high=logs[i][1]-1;
            count[low]++;
            count[high+1]--;
        }
        int year=1950,val=0;
        int psum=0;
        for(int i=1950;i<=2050;i++)
        {
            psum += count[i];
            if(psum > val)
            {
                year=i;
                val=psum;
            }
        }
        return year;
    }
}