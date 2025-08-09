class Solution {
public:
    int differenceOfSums(int n, int m)
    {
        int i=1,num1=n*(n+1)/2,num2=0;
        while(i*m <=n)
        {
            num2+= i*m;
            i++;
        }
        return num1-2*num2;
    }
};