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
    bool dfs(TreeNode *p,TreeNode *q)
    {
        if(p == NULL && q== NULL)
            return true;
        if(p == NULL || q== NULL)
            return false;
        
        if(p->val != q->val)
            return false;
        
        bool t1 = dfs(p->left,q->left);
        bool t2 = dfs(p->right,q->right);

        if(t1==false || t2==false)
            return false;

        return true;
    }

    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        return dfs(p,q);
    }
};