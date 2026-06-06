class Solution
{
public:
    set<vector<int>> st;

    void rec(vector<int>& candidates, int target,vector<int> temp)
    {
        if(target == 0)
        {
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }
        if(target<0)
            return;
        
        for(int i=0;i<candidates.size();i++)
        {
            if(candidates[i] <= target)
            {
                temp.push_back(candidates[i]);
                rec(candidates,target-candidates[i],temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        rec(candidates,target,{});
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};