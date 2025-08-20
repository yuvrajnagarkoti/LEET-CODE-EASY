class Solution {
public:
    int countDigits(int num)
    {
        int n=num,count=0;
        while( n>0 )
        {
            int temp = n%10;
            if( num%temp == 0 )
            {
                count++;
            }
            n=n/10;
        }
        return count;
    }
};