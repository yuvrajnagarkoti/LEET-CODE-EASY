#define max(a, b) ((a) > (b) ? (a) : (b))
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int *freq=(int *)calloc(max(1001,arrSize),sizeof(int));
    for (int i = 0; i < targetSize; i++)
    {
        freq[target[i]]++;
        freq[arr[i]]--;
    }
    for(int i = 0; i < 1001; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}