class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int s=0,p=1;
        while(n > 0)
        {
            int temp = n%10;
            n=n/10;
            s+=temp;
            p=p*temp; 
        }
        return p-s;
    }
};