/*
Pair: The std::pair class template is particularly useful for returning multiple values
from a function or when you need to associate two values in a container.

#include <utility>
pair<type, type> myPair;

make_pair(type, type);
({type, type});

*/

/*
Problem statement
Ninja has been given a binary tree having N nodes and an integer M,
he needs to find the level of node M. He finds it difficult to solve and asks for your help.

Note:
Consider root to be at level 1. It is guaranteed that all the nodes in the binary tree have distinct values.

Sample Input 1:
2
1 2 3 -1 -1 -1  6 -1 -1
6
1 2 -1 -1 -1
1
Sample Output 1:
3
1

Sample Input 2:
1
1 3 8 5 -1 7 -1 -1 -1 -1 -1
10
Sample Output 2:
0
*/

/*
int nodeLevel(TreeNode<int> *root, int searchedValue) {
  // Write your code here.
  if (root == NULL) {
    return 0;
  }

  queue<pair<TreeNode<int> *, int>> q;
  q.push({root, 1});
  while (!q.empty()) {
    pair<TreeNode<int> *, int> parent_node = q.front();
    TreeNode<int> *node = parent_node.first;
    int level = parent_node.second;
    q.pop();

    if (node->val == searchedValue) {
      return level;
    }

    if (node->left) {
      q.push({node->left, level + 1});
    }
    if (node->right) {
      q.push({node->right, level + 1});
    }
  }
}
*/