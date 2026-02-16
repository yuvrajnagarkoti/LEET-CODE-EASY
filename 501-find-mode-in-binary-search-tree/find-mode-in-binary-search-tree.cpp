/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    map<int,int> mpp;

    void dfs(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        dfs(root->left);
        mpp[root->val]++;
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root)
    {
        dfs(root);
        int maxi = INT_MIN;
        for(auto it:mpp)
        {
            maxi = max( maxi, it.second);
        }
        vector<int> ans;
        for(auto it:mpp)
        {
            if(it.second == maxi)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};