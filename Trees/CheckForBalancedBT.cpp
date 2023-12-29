class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true; // An empty tree is balanced
        }

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        if (abs(leftHeight - rightHeight) > 1) {
            return false; // Current tree is not balanced
        }

        return isBalanced(root->left) && isBalanced(root->right);
    }

private:
    int getHeight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }

        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        return max(leftHeight, rightHeight) + 1;
    }
};
