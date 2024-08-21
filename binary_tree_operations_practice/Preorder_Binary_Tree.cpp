/*
Problem statement
You are given a ‘Binary Tree’. Return the preorder traversal of the Binary Tree.

Example:
Input: Consider the following Binary Tree:

Output:
Following is the preorder traversal of the given Binary Tree: [1, 2, 5, 3, 6, 4]
*/

/*
vector<int> v;
void pre_order(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    pre_order(root->left);
    pre_order(root->right);
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    v.clear();
    pre_order(root);
    return v;
}
*/