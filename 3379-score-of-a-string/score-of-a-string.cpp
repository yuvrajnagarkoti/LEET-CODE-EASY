class Solution {
public:
    int scoreOfString(string s)
    {
        int i,sum=0;
        for(i=0 ; i<s.length()-1 ; i++)
        {
            sum = sum + abs( s[i]-s[i+1] );
        }
        return sum;
    }
};