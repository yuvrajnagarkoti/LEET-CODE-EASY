void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int n1=(mid-low+1);
    int n2=(high-mid);
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
        leftarr[i]=a[low+i];
    for(j=0;j<n2;j++)
        rightarr[j]=a[mid+1+j];
    i=j=0;
    k=low;
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            a[k]=leftarr[i++];
        }
        else
        {
            a[k]=rightarr[j++];
        }
        k++;
    }
    while (i < n1)
    {
        a[k++] = leftarr[i++];
    }
    while (j < n2)
    {
        a[k++] = rightarr[j++];
    }
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid = low + (high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int minMovesToSeat(int* seats, int n1, int* students, int n2)
{
    int minMoves = 0;
    // Sorting both arrays using mergesort (O(n log n))
    mergesort(seats,0,n1-1);
    mergesort(students,0,n2-1);
    // Calculating minimum moves
    for (int i = 0; i < n1; i++) {
        minMoves += abs(seats[i] - students[i]);
    }
    return minMoves;
}