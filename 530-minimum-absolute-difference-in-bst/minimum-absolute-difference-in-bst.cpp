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
    void inorder(TreeNode *root,vector<int> &dfs)
    {
        if(root == NULL)
            return;
        
        inorder(root->left,dfs);
        dfs.push_back(root->val);
        inorder(root->right,dfs);
    }
    int getMinimumDifference(TreeNode* root)
    {
        vector<int> dfs;
        inorder(root,dfs);

        sort(dfs.begin(),dfs.end());
        int ans=INT_MAX;
        for(int i=1;i<dfs.size();i++)
        {
            ans = min( ans, abs(dfs[i]-dfs[i-1]) );
        }
        return ans;
    }
};