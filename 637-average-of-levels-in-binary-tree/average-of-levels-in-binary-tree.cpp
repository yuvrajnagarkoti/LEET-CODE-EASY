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
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);

        while( !q.empty() )
        {
            long long sum =0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *node = q.front();
                sum += (long long) node ->val;
                q.pop();
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
                
            }
            ans.push_back( (double) sum /n);
        }
        return ans;
    }
};