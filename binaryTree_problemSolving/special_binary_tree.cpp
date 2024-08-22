/*
Problem statement
You are given an arbitrary binary tree. A binary tree is called special 
if every node of this tree has either zero or two children. 
You have to determine if the given binary tree is special or not. 
If the given binary tree is special, return True. Else, return False to the given function.

Note:
1. A binary tree is a tree in which each node can have at most two children. 
2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.

Sample Input 1:
2
3 5 1 6 2 0 8 -1 -1 7 4 -1 -1 -1 -1 -1 -1 -1 -1
1 2 3 4 5 -1 -1 6 -1 -1 -1 -1 -1    
Sample Output 1:
True
False

Sample Input 2:
2
5 2 3 8 1 -1 -1 7 9 -1 -1 5 6 -1 -1 -1 -1 -1 -1
1 5 7 -1 -1 6 3 9 8 -1 -1 -1 -1 13 -1 -1 -1 
Sample Output 2:
True
False
*/

/*
bool isSpecialBinaryTree(BinaryTreeNode<int> *root) {
  // Write your code here.
  if (root->left == NULL && root->right == NULL){
      return true;
  }
  if (root->left == NULL || root->right == NULL) {
    return false;
  }
  bool left = isSpecialBinaryTree(root->left);
  bool right = isSpecialBinaryTree(root->right);
  if (left == false || right == false) {
    return false;
  }
  return true;
}
*/