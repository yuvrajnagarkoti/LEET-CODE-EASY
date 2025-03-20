void reverse(char *s,int left,int right)
{
    int i,j;
    char temp;
    for(i=left,j=right;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}

char* reverseWords(char* s)
{
    int left,right;
    int l=0;
    while(s[l]!= '\0')
        l++;
    left=0;
    while(left<l)
    {
        right=left+1;
        while(s[right] != ' ' && s[right] != '\0')
        {
            right++;
        }
        reverse(s,left,right-1);
        left=right+1;
    }
    return s;
}