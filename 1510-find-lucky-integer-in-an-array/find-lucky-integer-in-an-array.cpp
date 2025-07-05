class Solution
{
public:

    static bool compare(int a, int b)
    {
        return a > b;  // Descending order
    }

    int findLucky(vector<int>& arr)
    {
        sort(arr.begin(), arr.end(), compare);

        int i = 0, j = 1;
        while (j < arr.size())
        {
            if (arr[i] != arr[j])
            {
                if (arr[i] == (j - i))
                    return arr[i];
                i = j;
            }
            j++;
        }

        if (arr[i] == (j - i))
            return arr[i];

        return -1;
    }
};
