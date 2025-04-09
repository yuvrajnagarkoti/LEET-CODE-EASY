class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int l = 1 , r = *max_element(piles.begin(),piles.end()) ;
        int opt = r ;
        while(l<=r)
        {
            int mid = (l+r)/2;
            long long reqh = 0 ;
            for(int p : piles)
            {
                reqh+=(p+mid - 1)/mid ;
            }
            if(reqh<=h)
            {
                opt = mid ;
                r = mid - 1 ;
            }
            else
            l = mid + 1;  
                  }
         return opt ;   
    }
};