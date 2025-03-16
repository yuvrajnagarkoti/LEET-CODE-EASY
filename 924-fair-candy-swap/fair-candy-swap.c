void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int n1=mid-low+1;
    int n2=high-mid;
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
        leftarr[i]=a[low+i];
    for(j=0;j<n2;j++)
        rightarr[j]=a[mid+1+j];
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
        a[k++]=leftarr[i++];
    while(j<n2)
        a[k++]=rightarr[j++];
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=low+(high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int* fairCandySwap(int* alice, int n1, int* bob, int n2, int* returnSize)
{
    int i,j,s1=0,s2=0;
    mergesort(alice,0,n1-1);
    mergesort(bob,0,n2-1);
    int *result=(int *)malloc(2*sizeof(int));
    *returnSize = 2;
    for(i=0;i<n1;i++)
        s1=s1+alice[i];
    for(j=0;j<n2;j++)
        s2=s2+bob[j];
    i = 0, j = 0;
    int diff = (s1-s2) / 2;
    while (i < n1 && j < n2)
    {
        int x = alice[i], y = bob[j];
        if (x - y == diff)
        {
            result[0] = x;
            result[1] = y;
            return result;
        }
        else if (x - y < diff)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return NULL;
}