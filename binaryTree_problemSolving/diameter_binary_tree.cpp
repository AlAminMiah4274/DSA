/*
Problem statement
You are given a Binary Tree. Return the length of the diameter of the tree.

Note :
The diameter of a binary tree is the length of the longest path between any two end nodes in a tree.
The number of edges between two nodes represents the length of the path between them.

Sample Input 1 :
1 2 3 4 7 -1 -1 -1 -1 -1 -1

Sample Output 1 :
3

Sample Input 2 :
1 2 3 -1 -1 -1 -1

Sample Output 2 :
2

Constraints:
1 <= n <= 10000
Where 'n' is the total number of nodes in the binary tree.
Time Limit: 1 sec
*/

/*
int max_diameter = 0;
int max_height(TreeNode<int> *root){
    if (root == NULL){
        return 0;
    }
    int left = max_height(root->left);
    int right = max_height(root->right);
    int diameter = left + right;
    max_diameter = max(diameter, max_diameter);
    return max(left, right) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
    // Write Your Code Here.
    max_diameter = 0;
    int height = max_height(root);
    return max_diameter;
}
*/