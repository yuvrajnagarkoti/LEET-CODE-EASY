class Solution 
{
public:

    TreeNode* rec(vector<int>& nums, int low, int high)
    {
        if (low > high)
            return nullptr;

        int mid = low + (high - low) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = rec(nums, low, mid - 1);
        root->right = rec(nums, mid + 1, high);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return rec(nums, 0, nums.size() - 1);
    }
};