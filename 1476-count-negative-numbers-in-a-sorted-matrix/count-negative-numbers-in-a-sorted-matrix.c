int countNegatives(int** grid, int r, int* c)
{
    int i,j,count=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c[i];j++)
        {
            if(grid[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}