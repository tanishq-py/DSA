//iterative preorder transversal
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class solution{
    public:
    vector<int> preorderTransversal(TreeNode* root){
    vector<int> preorder;
    if(root==NULL) return preorder;

    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root= st.top();
        st.pop();
        preorder.push_back(root->val);
        if(root->right !=  NULL){
            st.push(root->right);
        }
         if(root->left !=  NULL){
            st.push(root->left);
        }
    }
    return preorder;
    }
};


//iterative Inorder transversal
class solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if (root == NULL) return inorder;

        stack<TreeNode*> st;
        while (root != NULL || !st.empty()) {
            while (root != NULL) {
                st.push(root);
                root = root->left;
            }
            
            root = st.top();
            st.pop();
            
            inorder.push_back(root->val);
            root = root->right;
        }
        return inorder;
    }
};

//iterative postorder transversal with 2 stacks
class solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root == NULL) return postorder;

        stack<TreeNode*> st1, st2;
        st1.push(root);

        while (!st1.empty()) {
            root = st1.top();
            st1.pop();
            st2.push(root);

            if (root->left != NULL) {
                st1.push(root->left);
            }
            if (root->right != NULL) {
                st1.push(root->right);
            }
        }

        while (!st2.empty()) {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }

        return postorder;
    }
};

//with 1 stck
class solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root == NULL) return postorder;

        stack<TreeNode*> st;
        TreeNode* lastVisited = NULL;

        while (root != NULL || !st.empty()) {
            if (root != NULL) {
                st.push(root);
                root = root->left;
            } else {
                TreeNode* peekNode = st.top();
                if (peekNode->right != NULL && lastVisited != peekNode->right) {
                    // If right child exists and has not been processed yet
                    root = peekNode->right;
                } else {
                    // Process current node
                    postorder.push_back(peekNode->val);
                    lastVisited = st.top();
                    st.pop();
                }
            }
        }

        return postorder;
    }
};






