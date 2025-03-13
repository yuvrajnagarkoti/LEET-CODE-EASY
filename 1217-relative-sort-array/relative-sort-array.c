/**
 * Note: The returned array must be malloced, assume caller calls free().
*/
int* relativeSortArray(int* arr1, int n1, int* arr2, int n2, int* returnSize)
{
    int i,j;
    int max=arr1[0];
    for(i=1;i<n1;i++)
    {
        if(arr1[i]>max)
            max=arr1[i];
    }
    int * count = (int *)calloc(max+1,sizeof(int));
    for(i=0;i<n1;i++)
    {
        count[arr1[i]]++;
    }
    i=j=0;
    while(i<n2)
    {
        if(count[arr2[i]] > 0)
        {
            arr1[j]=arr2[i];
            count[arr2[i]]--;
            j++;
        }
        else
        {
            i++;
        }
    }
    i=0;
    while(i<max+1)
    {
        if(count[i]>0)
        {
            arr1[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
    free(count);
    *returnSize=n1;
    return arr1;
}