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
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        vector<int> dfs;
        inorder(root,dfs);

        int i=0;
        int j=dfs.size()-1;
        while(dfs[i] != low)
        {
            i++;
        }
        while(dfs[j] != high)
        {
            j--;
        }
        int sum=0;
        for( ;i<=j;i++)
        {
            sum += dfs[i];
        }
        return sum;
    }
};