class Solution {
public:
    bool checkGoodInteger(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int temp = n%10;
            n = n/10;
            sum = sum - temp;
            sum = sum + (temp*temp);
        }
        if(sum >= 50)
            return true;
        return false;
    }
};