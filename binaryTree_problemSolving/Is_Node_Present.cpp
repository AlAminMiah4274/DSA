/*
Problem statement
For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.

Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7
Sample Output 1:
true
*/

/*
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
  // Write your code here
  if (root == NULL) {
    return false;
  }
  queue<BinaryTreeNode<int> *> Q;
  Q.push(root);
  while (!Q.empty()) {
    BinaryTreeNode<int> *parent_node = Q.front();
    Q.pop();

    if (parent_node->data == x) {
      return true;
    }

    if (parent_node->left) {
      Q.push(parent_node->left);
    }
    if (parent_node->right) {
      Q.push(parent_node->right);
    }
  }
}
*/