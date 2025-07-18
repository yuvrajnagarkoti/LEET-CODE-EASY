class Solution
{
public:

    static bool compare(int a,int b)
    {
        return a > b;
    }
    int findLucky(vector<int>& arr)
    {
        sort(arr.begin(),arr.end(),compare);
        int i,j,n=arr.size();
        i=j=0;
        while( i<n )
        {
            while( j<n && arr[i] == arr[j])
            {
                j++;
            }
            if( (j-i) == arr[i] )
                return arr[i];
            else
                i=j;
        }
        return -1;
    }
};