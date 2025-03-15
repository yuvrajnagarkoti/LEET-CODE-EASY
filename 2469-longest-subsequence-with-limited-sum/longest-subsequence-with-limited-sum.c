/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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
        {
            a[k++]=leftarr[i++];
        }
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
        int mid = low + (high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int* answerQueries(int* nums, int n, int* queries, int m, int* returnSize)
{
    mergesort(nums,0,n-1);
    int i,j,sum;
    int *answer =(int *)calloc(m,sizeof(int));
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if( sum+nums[j] <=  queries[i])
            {
                sum=sum+nums[j];
                answer[i]++;
            }
            else
            {
                break;
            }
        }
    }
    *returnSize=m;
    return answer;
}