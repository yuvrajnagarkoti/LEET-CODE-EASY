#define swap(x,y,t) (t=x,x=y,y=t)
void Q_sort(int *nums,int left,int right){
    int base=nums[right];
    int j=left-1;
    int temp;
    if(left<right){
        for(int i=left;i<right;i++){
            if(base<nums[i]){
                j++;
                swap(nums[j],nums[i],temp);
            }
        }
        swap(nums[j+1],nums[right],temp);
        Q_sort(nums,left,j);
        Q_sort(nums,j+2,right);
    }
}

int arrayPairSum(int* nums, int numsSize) {
    Q_sort(nums,0,numsSize-1);
    int sum=0;
    for(int i=1;i<numsSize;i=i+2){
        sum=sum+fmin(nums[i-1],nums[i]);
    }
    return sum;
}