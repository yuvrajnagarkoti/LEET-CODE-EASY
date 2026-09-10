class Solution {
    public int numberOfPoints(List<List<Integer>> nums)
    {
        int []count = new int[102];
        for(int i=0;i<nums.size();i++)
        {
            int low=nums.get(i).get(0);
            int high=nums.get(i).get(1);

            count[low]++;
            count[high+1]--;
        }
        int ans=0;
        int pre=0;
        for(int i=1;i<101;i++)
        {
            pre = pre + count[i];
            count[i] = pre;
            if(count[i] >= 1)
            {
                ans++;
            }
        }
        return ans;
    }
}