class Solution {
    public int numberOfPoints(List<List<Integer>> nums)
    {
        int[] count = new int[101];
        for(int i=0;i<nums.size();i++)
        {
            int low=nums.get(i).get(0);
            int high=nums.get(i).get(1);
            while(low <= high)
            {
                count[low]=1;
                low++;
            }
        }
        int ans=0;
        for(int i=0;i<101;i++)
        {
            if(count[i] == 1)
                ans++;
        }
        return ans;
    }
}