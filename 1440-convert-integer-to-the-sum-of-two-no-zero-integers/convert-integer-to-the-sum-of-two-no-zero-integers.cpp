class Solution
{
    public:
    static bool isnozero(int n)
    {   
        if(n==0)
            return false;
        while(n>0)
        {
            int temp = n%10;
            n=n/10;
            if(temp == 0)
                return false;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n)
    {
        int i=1,j=n-1;
        while(i<=j)
        {
            if(isnozero(i) && isnozero(j))
                break;
            i++;
            j--;
        }
        return {i,j}; 
    }
    
};