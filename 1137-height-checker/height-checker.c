int heightChecker(int* heights, int n)
{
    int i,j,c=0;
    int max=heights[0];
    for(i=1;i<n;i++)
    {
        if(max<heights[i])
            max=heights[i];
    }
    int * count = (int *)calloc(max+1,sizeof(int));
    for(i=0;i<n;i++)
    {
        count[heights[i]]++;
    }
    int * expected = (int *)malloc(n*sizeof(int));
    i=j=0;
    while(i<max+1)
    {
        if(count[i]>0)
        {
            expected[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(expected[i] != heights[i])
        {
            c++;
        }
    }
    return c;
}