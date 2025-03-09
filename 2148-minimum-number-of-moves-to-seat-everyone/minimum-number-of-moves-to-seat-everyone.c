// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int minMovesToSeat(int* seats, int n1, int* students, int n2)
{
    int minMoves = 0;
    // Sorting both arrays using qsort (O(n log n))
    qsort(seats, n1, sizeof(int), compare);
    qsort(students, n2, sizeof(int), compare);
    // Calculating minimum moves
    for (int i = 0; i < n1; i++) {
        minMoves += abs(seats[i] - students[i]);
    }
    return minMoves;
}