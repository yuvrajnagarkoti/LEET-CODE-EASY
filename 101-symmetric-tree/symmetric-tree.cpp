class Solution
{
public:
    void dfs(TreeNode *root, vector<int> &t)
    {
        if(root == NULL)
        {
            t.push_back(-101);
            return;
        }

        t.push_back(root->val);
        dfs(root->left, t);
        dfs(root->right, t);
    }

    void dfs2(TreeNode *root, vector<int> &t)
    {
        if(root == NULL)
        {
            t.push_back(-101);
            return;
        }

        t.push_back(root->val);
        dfs2(root->right, t);
        dfs2(root->left, t);
    }

    bool isSymmetric(TreeNode* root)
    {
        if(root == NULL)
            return true;

        vector<int> t1, t2;

        dfs(root->left, t1);
        dfs2(root->right, t2);

        return t1 == t2;
    }
};