class Solution {
    public int countTestedDevices(int[] battery)
    {
        int ans=0;
        for(int i=0;i<battery.length;i++)
        {
            if(battery[i]-ans > 0)
            {
                ans++;
            }
        }

        return ans;
    }
}