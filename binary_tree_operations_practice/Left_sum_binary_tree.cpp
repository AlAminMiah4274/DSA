/*
Problem statement
Given a binary tree having ‘N’ number of nodes.
Your task is to find the sum of all left nodes present in the input binary tree.
That is, you need to take the sum of all nodes which are the left child of some node.

Note :

1. A binary tree is a tree in which each node can have at most two children.
2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.

Sample Input 1 :
2
3 5 1 6 2 0 8 -1 -1 7 4 -1 -1 -1 -1 -1 -1 -1 -1
1 2 3 4 5 -1 -1 6 -1 -1 -1 -1 -1
Sample Output 1 :
18
12
*/

/*
long long leftSum(BinaryTreeNode<int> *root) {
  // Write your code here.
  if (root == NULL) {
    return 0;
  }
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  long long sum = 0;
  while (!q.empty()) {
    BinaryTreeNode<int> *parent_node = q.front();
    q.pop();

    if (parent_node->left) {
      sum += parent_node->left->data;
    }

    if (parent_node->left) {
      q.push(parent_node->left);
    }
    if (parent_node->right) {
      q.push(parent_node->right);
    }
  }

  return sum;
}
*/