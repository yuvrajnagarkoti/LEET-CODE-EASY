class Solution {
public:
    bool isPalindrome(int x)
    {
        long long temp=x,n=0;
        while(temp > 0)
        {
            int t = temp%10;
            temp=temp/10;
            n = n*10 + t;
        }
        if(( long long)x == n )
            return true;
        return false;
    }
};