class Solution {
public:
    bool judgeCircle(string moves)
    {
        int i=0,j=0;
        for(int x=0;x<moves.size();x++)
        {
            if(moves[x] == 'U')
                i--;
            else if(moves[x] == 'D')
                i++;
            else if(moves[x] == 'L')
                j--;
            else
                j++;


        }
        if(i==0 && j==0)
            return true;
        return false;
    }
};