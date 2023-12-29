class Solution {
public:
    bool isIdentical(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true; // Both trees are empty, they are identical
        }

        if (p == nullptr || q == nullptr) {
            return false; // One tree is empty, the other is not, they are not identical
        }

        return (p->val == q->val) &&
               isIdentical(p->left, q->left) &&
               isIdentical(p->right, q->right);
    }
};
