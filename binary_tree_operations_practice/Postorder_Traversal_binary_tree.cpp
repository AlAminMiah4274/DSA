/*
Problem statement
You have been given a Binary Tree of 'n' nodes, where the nodes have integer values.
Your task is to return its postorder traversal.

For Example:
For the given tree below,
Postorder traversal for the given tree will be [4, 5, 2, 3, 1]. Hence, the answer is [4, 5, 2, 3, 1].
*/

/*
vector<int> v;
void post_order(TreeNode *root) {
  if (root == NULL) {
    return;
  }
  post_order(root->left);
  post_order(root->right);
  v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root) {
  // Write your code here.
  v.clear();
  post_order(root);

  return v;
}
*/