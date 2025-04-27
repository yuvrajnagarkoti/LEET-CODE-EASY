class Solution
{
public:
    int mySqrt(int x)
    {
        if(x <= 1) return x;
        int l=1,h=x/2,ans=0;
        while(l <= h)
        {
            long long  mid = l+ (h-l)/2;
            if( (mid*mid) == x)
                return mid;
            else if( (mid*mid) > x )
                h=mid-1;
            else
            {
                l=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};