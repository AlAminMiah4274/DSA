/*
Problem statement
You have been given a Binary Tree of 'n' nodes, where the nodes have integer values.
Your task is to return the In-Order traversal of the given binary tree.

For example :
For the given binary tree:

The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].
*/

/*
vector<int> v;
void in_order(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    v.push_back(root->data);
    in_order(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    v.clear();
    in_order(root);
    return v;
}
*/