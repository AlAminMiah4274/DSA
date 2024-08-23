/*
Problem statement
You have been given a Binary Tree of integers.
You are supposed to return the reverse of the level order traversal.

Sample Input 1:
1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
Sample Output 1:
7 6 5 4 3 2 1

Sample Input 2:
2 7 5 2 6 -1 9 -1 -1 5 11 4 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
4 11 5 9 6 2 5 7 2

Constraints:
0 <= N <= 5 * 10^5
0 <= data <= 10^5 and data != -1

Where ‘N’ is the total number of nodes in the binary tree, and 'data' is the value of the binary tree node.
Time Limit: 1 sec
*/

/*
vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    vector<int> v;
    stack<int> myStack;
    queue<TreeNode<int> *> q;
    if (root){
        q.push(root);
    }

    while (!q.empty()){
        TreeNode<int> *node = q.front();
        q.pop();

        myStack.push(node->val);

        if (node->left){
            q.push(node->left);
        }
        if (node->right){
            q.push(node->right);
        }
    }

    while (!myStack.empty()){
        int value = myStack.top();
        myStack.pop();

        v.push_back(value);
    }

    return v;
}
*/