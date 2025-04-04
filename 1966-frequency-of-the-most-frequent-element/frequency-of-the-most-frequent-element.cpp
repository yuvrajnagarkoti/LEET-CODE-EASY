class Solution
{
public:

    void merge(vector<int>& nums,int low,int mid,int high)
    {
        int i,j,k;
        int n1=mid-low+1;
        int n2=high-mid;
        vector<int>leftarr(n1);
        vector<int>rightarr(n2);
        for(i=0;i<n1;i++)
            leftarr[i]=nums[low+i];
        for(j=0;j<n2;j++)
            rightarr[j]=nums[mid+j+1];
        i=j=0;
        k=low;
        while(i<n1 && j<n2)
        {
            if(leftarr[i] < rightarr[j])
                nums[k++]=leftarr[i++];
            else
                nums[k++]=rightarr[j++];
        }
        while(i<n1)
            nums[k++]=leftarr[i++];
        while(j<n2)
            nums[k++]=rightarr[j++];
    }

    void mergesort(vector<int>& nums, int low,int high)
    {
        if(low<high)
        {
            int mid=low+(high-low)/2;
            mergesort(nums,low,mid);
            mergesort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }

    int maxFrequency(vector<int>& nums, int k)
    {
        int left = 0, ans = 0,n=nums.size();
        mergesort(nums,0,n-1);
        long prefixSum = 0;
        for (int right = 0; right < n; right++)
        {
            prefixSum += nums[right];      
            // The sum required to make all elements in range [left, right] equal to nums[right]
            while ((long)(right - left + 1) * nums[right] - prefixSum > k)
            {
                prefixSum -= nums[left++];
            }      
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
