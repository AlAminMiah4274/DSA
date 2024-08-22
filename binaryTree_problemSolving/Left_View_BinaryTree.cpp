/*
Problem statement
You have been given a binary tree of integers.
You are supposed to find the left view of the binary tree.
The left view of a binary tree is the set of all nodes that
are visible when the binary tree is viewed from the left side.

Sample Input 1:
2
3 4 -1 -1 -1
2 8 7 -1 5 -1 -1 1 -1 -1 -1
Sample Output 1:
3 4
2 8 5 1

Sample Input 2:
2
1 3 5 12 -1 8 -1 -1 -1 -1 -1
9 6 3 -1 -1 4 8 -1 -1 -1 -1
Sample Output 2:
1 3 12
9 6 4

Constraints:
1 <= T <= 100
0 <= N <= 3000
1 <= data <= 10^5 and data!=-1

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree,
and “data” is the value of the binary tree node
Time Limit: 1 sec
*/

/*
vector<int> getLeftView(TreeNode<int> *root) {
  //    Write your code here

  bool frr[3005] = {false};
  vector<int> myVector;
  queue<pair<TreeNode<int> *, int>> myQueue;
  if (root){
      myQueue.push({root, 1});
  }

  while (!myQueue.empty()){
      pair<TreeNode<int> *, int> parent_node = myQueue.front();
      myQueue.pop();
      TreeNode<int> *node = parent_node.first;
      int level = parent_node.second;

      if (frr[level] == false){
          myVector.push_back(node->data);
          frr[level] = true;
      }

      if (node->left){
          myQueue.push({node->left, level + 1});
      }
      if (node->right){
          myQueue.push({node->right, level + 1});
      }
  }

  return myVector;

}
*/