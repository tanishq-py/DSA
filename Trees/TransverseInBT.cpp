//DFS (depth first search) - deapth wise
//inorder - left, root, right
//preorder - root, left,right
//postorder- left, right, root

//BFS (breadth first search) - level wise

//Preorder transveral
void preorder(node)
{ 
  if(node==NULL){
    return;}
  cout<<node->data;
  preorder(node->left);
  preorder(node->right);
}

//inorder transversal
void preorder(node)
{ 
  if(node==NULL){
    return;}
  preorder(node->left);
  cout<<node->data;
  preorder(node->right);
}

//postorder transversal
void preorder(node)
{ 
  if(node==NULL){
    return;}
  preorder(node->left);
  preorder(node->right);
  cout<<node->data;
}

//Level transveral
class solution{
public:
  vector<vector<int>> levelOrder(Treenode* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    quene<Treenode*> q;
    q.push(root);
    while(!q.empty()){
      int size= q.size();
      vector<int> level;
      for(int i=0;i<size;i++){
        Treenode *node= q.front();
        q.pop();
        if(node->left!=NULL) q.push(node->left);
        if(node->right!=NULL) q.push(node->right);
        level.push_back(node->val);
      }
      ans.push_back(level);
    }
    return ans;
  }
};



