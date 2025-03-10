void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int n1=(mid-low+1);
    int n2=(high-mid);
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
        leftarr[i]=a[low+i];
    for(j=0;j<n2;j++)
        rightarr[j]=a[mid+j+1];
    i=j=0;
    k=low;
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<rightarr[j])
            a[k++]=leftarr[i++];
        else
            a[k++]=rightarr[j++];
    }
    while(i<n1)
    {
        a[k++]=leftarr[i++];
    }
    while(j<n2)
    {
        a[k++]=rightarr[j++];
    }
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid = low + (high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int heightChecker(int* heights, int n)
{
    int i,c=0;
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=heights[i];
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        if(a[i]!=heights[i])
        {
            c++;
        }
    }
    free(a);
    return c;
}