class Solution
{
public:
    // Custom compare function for sorting in descending order
    static bool compare(int a, int b)
    {
        return a > b;
    }

    int findLucky(vector<int>& arr)
    {
        // Sort the array in descending order
        sort(arr.begin(), arr.end(), compare);

        int i = 0, j = 1;
        while (j < arr.size())
        {
            if (arr[i] != arr[j])
            {
                // If frequency of arr[i] equals its value, return it (lucky number found)
                if (arr[i] == (j - i))
                    return arr[i];

                // Move to the next unique number
                i = j;
            }
            j++;
        }

        // Check the last group (needed because last group may not be checked inside the loop)
        if (arr[i] == (j - i))
            return arr[i];

        // If no lucky number found, return -1
        return -1;
    }
};
