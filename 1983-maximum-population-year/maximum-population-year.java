class Solution {

    static int compare(int[] a, int[] b)
    {
        if(a[0] != b[0])
            return Integer.compare(a[0], b[0]);

        return Integer.compare(a[1], b[1]);
    }
    public int maximumPopulation(int[][] logs)
    {
        int n=logs.length;
        int [][]years = new int[n*2][2];
        int c=0;
        for(int i=0;i<n;i++)
        {
            years[c][0] = logs[i][0];
            years[c][1] = 1;
            c++;
            years[c][0] = logs[i][1];
            years[c][1] = -1;
            c++;
        }
        Arrays.sort(years,Solution::compare);
        int presum=0;
        int y=1950;
        int p=0;
        for(int i=0;i<years.length;i++)
        {
            presum += years[i][1];
            if(presum > p)
            {
                p=presum;
                y=years[i][0];
            }
        }
        return y;
    }
}