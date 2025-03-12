int partition(int arr[],int low, int high)
{
    int i,j;
    int pivot = arr[high];
    i=low-1;
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i=i+1;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
int temp=arr[i+1];
arr[i+1]=arr[high];
arr[high]=temp;
return i+1;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
       int q=partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);
    }
}
int arrayPairSum(int* nums, int numsSize) {
quicksort(nums,0,numsSize-1);
  int sum=0;
  for(int i=0;i<numsSize;i+=2)
  {
    sum=nums[i]+sum;
  }
return sum;
}