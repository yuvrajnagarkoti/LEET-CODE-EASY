class Solution
{
    public:

    void rec(string cur,string nxt,vector<string> &ans)
    {
        if(nxt.length() == 0)
        {
            ans.push_back(cur);
            return;
        }

        if(isdigit(nxt[0]))
        {
            cur.push_back(nxt[0]);
            rec(cur, string(nxt.begin()+1,nxt.end()), ans);
        }
        else
        {
            cur.push_back(tolower(nxt[0]));
            rec(cur, string(nxt.begin()+1,nxt.end()),ans);
            cur.pop_back();
            cur.push_back(toupper(nxt[0]));
            rec(cur, string(nxt.begin()+1,nxt.end()),ans);
            cur.pop_back();
        }

    }

    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        string cur="";
        string nxt=s;

        rec(cur,nxt,ans);
        return ans;
    }
};