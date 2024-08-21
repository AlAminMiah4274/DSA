/*
Problem statement
You are given a Binary tree. You have to count and return the number of leaf nodes present in it.

A binary tree is a tree data structure in which each node has at most two children, 
which are referred to as the left child and the right child

A node is a leaf node if both left and right child nodes of it are NULL.
*/

/*
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int left = noOfLeafNodes(root->left);
        int right = noOfLeafNodes(root->right);
        return left + right;
    }
}
*/