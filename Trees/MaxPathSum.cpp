class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        findMaxPathSum(root, maxSum);
        return maxSum;
    }

    int findMaxPathSum(TreeNode* root, int& maxSum) {
        if (root == nullptr) {
            return 0;
        }

        int leftSum = max(0, findMaxPathSum(root->left, maxSum));
        int rightSum = max(0, findMaxPathSum(root->right, maxSum));

        // Update the maximum path sum considering the current node
        maxSum = max(maxSum, leftSum + rightSum + root->val);

        // Return the maximum sum of a path that includes the current node
        return max(leftSum, rightSum) + root->val;
    }
};
