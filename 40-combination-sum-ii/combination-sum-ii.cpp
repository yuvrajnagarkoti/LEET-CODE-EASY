class Solution
{
public:
    set<vector<int>> st;

    void rec(vector<int>& candidates, int target,vector<int> temp, int idx)
    {
        if(target == 0)
        {
            st.insert(temp);
            return;
        }
        if(target < 0)
            return;

        for(int i = idx; i < candidates.size(); i++)
        {
            if(i > idx && candidates[i] == candidates[i-1])
                continue;

            if(candidates[i] > target)
                break;

            temp.push_back(candidates[i]);
            rec(candidates, target - candidates[i], temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        rec(candidates, target, {}, 0);
        return vector<vector<int>>(st.begin(), st.end());
    }
};