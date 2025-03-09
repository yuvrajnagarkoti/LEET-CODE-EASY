/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char** sortPeople(char** names, int n1, int* heights, int h1, int* returnsize)
{
    int i,j,t1,k;
    char t2[100];
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(heights[i]<heights[j])
            {
                t1=heights[i];
                heights[i]=heights[j];
                heights[j]=t1;
                k=0;
                // Swap names (by swapping pointers)
                char* tempName = names[i];
                names[i] = names[j];
                names[j] = tempName;
            }
        }
    }
    *returnsize=n1;
    return names;
}