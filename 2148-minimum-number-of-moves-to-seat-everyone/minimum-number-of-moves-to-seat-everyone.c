int minMovesToSeat(int* seats, int n1, int* students, int n2)
{
    int i,j,temp,min=0;
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(seats[i]>seats[j])
            {
                temp=seats[i];
                seats[i]=seats[j];
                seats[j]=temp;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(students[i]>students[j])
            {
                temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        min= min + abs(students[i]-seats[i]);
    }
    return min;
}