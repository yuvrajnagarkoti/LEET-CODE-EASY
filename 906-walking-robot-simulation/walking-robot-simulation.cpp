class Solution
{
public:
    
    int moved(int &i,int &j,char &d,unordered_set<string> &st,int val)
    {
        int x=0,y=0;
        int ans=0;
        if(d=='N')  y=1;
        else if(d=='S')  y=-1;
        else if(d=='E')  x=1;
        else x=-1;

        for(int k=0;k<val;k++)
        {
            i=i+x;
            j=j+y;
            if( st.count( to_string(i)+','+to_string(j) ) )
            {
                i=i-x;
                j=j-y;
                break;
                ans=max(ans, ((i*i)+(j*j)) );
            }
            ans=max(ans, ((i*i)+(j*j)) );
        }
        return ans;
    }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles)
    {
        unordered_set<string> st;
        for(auto &o : obstacles)
        {
            st.insert(to_string(o[0]) + "," + to_string(o[1]));
        }
        char d = 'N';
        int i=0,j=0;
        int ans=0;
        for(int x=0;x<commands.size();x++)
        {
            if(commands[x] == -2 || commands[x] == -1)
            {
                if(commands[x] == -2)
                {
                    if(d=='N') d='W';
                    else if(d=='W') d='S';
                    else if(d=='E') d='N';
                    else d='E';
                }
                else
                {
                    if(d=='N') d='E';
                    else if(d=='W') d='N';
                    else if(d=='E') d='S';
                    else d='W';
                }
            }
            else
            {
                ans = max(ans,moved(i,j,d,st,commands[x]));
            }
        }
        return ans;
    }
};