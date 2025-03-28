int** flipAndInvertImage(int** image, int n, int* m, int* returnSize, int** returnColumnSizes)
{
    int i, j, temp;
    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        // Ensure image[i] has at least 1 column to process
        if (m[i] <= 0) continue;

        // Flip and invert the row simultaneously
        for (j = 0; j < m[i] / 2; j++)
        {
            // Swap and invert
            temp = image[i][j] ^ 1;
            image[i][j] = image[i][m[i] - 1 - j] ^ 1;
            image[i][m[i] - 1 - j] = temp;
        }
        
        // If the row has an odd number of elements, invert the middle one
        if (m[i] % 2 == 1)
        {
            image[i][m[i] / 2] ^= 1;
        }

        // Store column size for this row
        (*returnColumnSizes)[i] = m[i]; 
    }
    *returnSize = n; // Set returnSize
    return image;
}
