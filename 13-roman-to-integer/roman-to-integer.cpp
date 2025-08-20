class Solution
{
    public:
    int romanToInt(string s)
    {
        int i=0,ans=0,n=s.length();
        while( i<n )
        {
            if(s[i] == 'M')
                ans=ans+1000;
            else if(s[i] == 'D')
                ans=ans+500;
            else if(s[i] == 'L')
                ans=ans+50;
            else if(s[i] == 'V')
                ans=ans+5;
            else if(s[i] == 'C')
            {
                if(i<n-1 && s[i+1]=='D')
                {
                    ans+=400;
                    i++;
                }
                else if( i<n-1 && s[i+1]=='M')
                {
                    ans+=900;
                    i++;
                }
                else
                    ans+=100;
            }
            else if(s[i] == 'X')
            {
                if(i<n-1 && s[i+1]=='L')
                {
                    ans+=40;
                    i++;
                }
                else if( i<n-1 && s[i+1]=='C')
                {
                    ans+=90;
                    i++;
                }
                else
                    ans+=10;
            }
            else if(s[i] == 'I')
            {
                if(i<n-1 && s[i+1]=='V')
                {
                    ans+=4;
                    i++;
                }
                else if( i<n-1 && s[i+1]=='X')
                {
                    ans+=9;
                    i++;
                }
                else
                    ans+=1;
            }
            i++;
        }
        return ans;
    }
};