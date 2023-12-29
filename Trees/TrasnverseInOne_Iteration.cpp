class solution {
public:
    vector<vector<int>> threeTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) return result;

        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});

        vector<int> preorder, inorder, postorder;

        while (!st.empty()) {
            auto [node, state] = st.top();
            st.pop();

            if (state == 1) {
                // Preorder processing
                preorder.push_back(node->val);
                st.push({node, 2});

                if (node->left != NULL) {
                    st.push({node->left, 1});
                }
            } else if (state == 2) {
                // Inorder processing
                inorder.push_back(node->val);
                st.push({node, 3});

                if (node->right != NULL) {
                    st.push({node->right, 1});
                }
            } else {
                // Postorder processing
                postorder.push_back(node->val);
            }
        }

        result.push_back(preorder);
        result.push_back(inorder);
        result.push_back(postorder);

        return result;
    }
};
