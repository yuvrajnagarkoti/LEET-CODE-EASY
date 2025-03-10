int deleteGreatestValue(int** grid, int n1, int* n2)
{
    int i, j, temp;
    // Sort each row in descending order
    for (int a = 0; a < n1; a++)
    {
        for (i = 0; i < n2[a] - 1; i++)
        {
            for (j = i + 1; j < n2[a]; j++)
            {
                if (grid[a][i] < grid[a][j])
                {
                    temp = grid[a][i];
                    grid[a][i] = grid[a][j];
                    grid[a][j] = temp;
                }
            }
        }
    }

    int sum = 0;
    // Find the max element in each column
    for (i = 0; i < n2[0]; i++) // Iterate through columns
    {  
        int max = grid[0][i];
        for (j = 1; j < n1; j++)
        {
            if (grid[j][i] > max)
            {
                max = grid[j][i];
            }
        }
        sum += max;
    }
    return sum;
}
