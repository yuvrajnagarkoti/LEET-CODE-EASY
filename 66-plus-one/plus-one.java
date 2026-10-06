class Solution {
    public int[] plusOne(int[] digits)
    {
        int flag=1;
        int i=digits.length-1;
        while(i>=0)
        {
            if(flag==1)
            {
                if(digits[i] == 9)
                    digits[i] = 0;
                else
                {
                    digits[i]++;
                    flag=0;
                }
            }
            i--;
        }
        if(flag == 1)
        {
            int []ans = new int[digits.length+1];
            ans[0]=1;
            for(int j=1;j<ans.length;j++)
            {
                ans[j]=digits[j-1];
            }
            return ans;
        }

        return digits;
    }
}