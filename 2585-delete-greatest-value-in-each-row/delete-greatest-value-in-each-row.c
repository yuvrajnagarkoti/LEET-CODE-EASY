int comp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize)
{
    for(int i=0;i<gridSize;i++)
    {
        qsort(grid[i],gridColSize[i],sizeof(int),comp);
    }
    int sum=0;
    for(int i=0;i<gridColSize[0];i++)
    {
        int large=0;
        for(int j=0;j<gridSize;j++)
        {
            if(grid[j][i]>large)
            {
                large=grid[j][i];
            }
        }
        sum+=large;
    }
    return sum;
}