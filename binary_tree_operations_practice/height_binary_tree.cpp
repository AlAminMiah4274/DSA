/*
Problem statement
The height of a tree is equal to the number of nodes 
on the longest path from the root to a leaf. 
You are given an arbitrary binary tree consisting of 'n' 
nodes where each node is associated with a certain value.

Find out the height of the tree.

Example :
Input: Let the binary tree be:

Output: 2
Explanation: The root node is 3, and the leaf nodes are 1 and 2.

There are two nodes visited when traversing from 3 to 1.
There are two nodes visited when traversing from 3 to 2.

Therefore the height of the binary tree is 2.
*/

/*
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if (root == NULL)
    {
        return 0;
    }

    int left = heightOfBinaryTree(root->left);
    int right = heightOfBinaryTree(root->right);
    return max(left, right) + 1;
}
*/