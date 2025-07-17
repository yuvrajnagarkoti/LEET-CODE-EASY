class Solution
{
public:

    static bool isvalid(string s,int i,int j,int k)
    {
        int zc=0,oc=0;
        while(i <=j)
        {
            if(s[i] == '0')
                zc++;
            else
                oc++;
            i++;
        }
        if( zc <= k || oc <= k)
            return true;
        return false;
    }
    int countKConstraintSubstrings(string s, int k)
    {
        int i=0,j=0;
        int count=0;
        for(i=0;i<s.length();i++)
        {
            for(j=i;j<s.length();j++)
            {
                if(isvalid(s,i,j,k))
                {
                    count++;
                }
            }
        }
        return count;
    }
};