
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int n1, int* heights, int n2, int* returnsize)
{
    int i, j, maxIdx;

    // Selection Sort: Sorting both names and heights in descending order
    for (i = 0; i < n1 - 1; i++)
    {
        maxIdx = i;
        for (j = i + 1; j < n1; j++)
        {
            if (heights[j] > heights[maxIdx])
                maxIdx = j;
        }

        // Swap heights
        int tempHeight = heights[i];
        heights[i] = heights[maxIdx];
        heights[maxIdx] = tempHeight;

        // Swap names (by swapping pointers)
        char* tempName = names[i];
        names[i] = names[maxIdx];
        names[maxIdx] = tempName;
    }

    // Allocate memory for result and copy sorted names
    char** result = (char**)malloc(n1 * sizeof(char*));
    for (i = 0; i < n1; i++)
    {
        result[i] = strdup(names[i]); // Duplicate strings to avoid modifying input
    }

    *returnsize = n1;
    return result;
}
