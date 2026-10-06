class Solution {
    public int countTestedDevices(int[] battery)
    {
        int ans=0;
        for(int i=0;i<battery.length;i++)
        {
            if(battery[i] > 0)
            {
                ans++;
                for(int j=i;j<battery.length;j++)
                {
                    if(battery[j] > 0)
                        battery[j]--;
                }
            }
        }

        return ans;
    }
}