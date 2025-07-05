class Solution
{
    public:

    static bool compare(int a,int b)
    {
        return a>b;
    }

    int findLucky(vector<int>& arr)
    {
        sort( arr.begin(),arr.end() ,compare);
        if(arr.size() == 1)
        {
            if(arr[0] == 1)     return 1;
            return -1;
        }
        
        int i=0,j=1;
        while( j < arr.size() )
        {
            if( arr[i] != arr[j] )
            {
                if( arr[i] == (j-i) )
                    return j-i;
                i=j;
                j++;
            }
            else if(arr[i] == arr[j] )
            {
                j++;
            }
        }
        if(arr[i] == (j-i))
            return j-i;
        return -1;
    }
};