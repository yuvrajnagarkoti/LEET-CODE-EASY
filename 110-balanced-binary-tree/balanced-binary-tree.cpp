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

    int maxlevel(TreeNode *root,int level)
    {
        if(root == NULL)
            return level;
        
        int left = maxlevel(root->left,level+1);
        int right = maxlevel(root->right,level+1);

        return max(left,right);
    }
    bool preorder(TreeNode *root,int level)
    {
        if(root == NULL)
            return true;
        
        int left = maxlevel(root->left,level+1);
        int right = maxlevel(root->right,level+1);

        if(abs(left-right) > 1)
            return false;
        
        bool l1 = preorder(root->left,level+1);
        bool l2 = preorder(root->right,level+1);
        if(l1==l2 && l1 == true)
            return true;
        else
            return false;
    }
    bool isBalanced(TreeNode* root)
    {
        return preorder(root,1);
    }
};