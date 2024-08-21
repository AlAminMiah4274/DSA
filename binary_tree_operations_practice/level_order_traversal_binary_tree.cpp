/*
Problem statement
You have been given a Binary Tree of integers. You are supposed
to return the level order traversal of the given tree.

For example:
For the given binary tree

The level order traversal will be {1,2,3,4,5,6,7}.
*/

/*
vector<int> v;

void level_order(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *parent_node = q.front();
        q.pop();

        v.push_back(parent_node->val);

        if (parent_node->left)
        {
            q.push(parent_node->left);
        }
        if (parent_node->right)
        {
            q.push(parent_node->right);
        }
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order(root);

    return v;
}
*/