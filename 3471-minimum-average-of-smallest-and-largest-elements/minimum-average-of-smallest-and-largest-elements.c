#include <float.h>
void merge(int a[],int low,int mid,int high)
{
    int i,j,k,n1,n2;
    n1=mid-low+1;
    n2=high-mid;
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
        int mid=low + (high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
double minimumAverage(int* nums, int n)
{
    mergesort(nums,0,n-1);
    double averages[n/2];
    int i,j,k=0;
    double min=DBL_MAX;
    for(i=0,j=n-1; i<j ; i++,j--)
    {
        averages[k]= (double)(nums[i]+nums[j])/2;
        if(averages[k]<min)
        {
            min=averages[k];
        }
        k++;
    }
    return min;
}