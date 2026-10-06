class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions)
    {
        double diag=0.0;
        int len=0,width=0;
        for(int i=0;i<dimensions.length;i++)
        {
            int x=dimensions[i][0];
            int y=dimensions[i][1];
            if(diag == Math.sqrt(x*x + y*y))
            {
                if(len*width < x*y)
                {
                    len = x;
                    width = y;
                }
            }
            if(diag < Math.sqrt(x*x + y*y))
            {
                len = x;
                width = y;
                diag = Math.sqrt(x*x + y*y);
            }
        }

        return len*width;
    }
}