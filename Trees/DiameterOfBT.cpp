//longest path between 2 node
//root does not need to pass through root

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        computeHeight(root, diameter);
        return diameter;
    }

    int computeHeight(TreeNode* node, int& diameter) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = computeHeight(node->left, diameter);
        int rightHeight = computeHeight(node->right, diameter);

        // Diameter passing through the current node
        diameter = max(diameter, leftHeight + rightHeight);

        // Return the height of the current subtree
        return 1 + max(leftHeight, rightHeight);
    }
};
