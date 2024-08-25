#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_binary_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *parent_node = q.front();
        q.pop();

        int left, right;
        cin >> left >> right;

        Node *left_node;
        Node *right_node;
        if (left == -1)
        {
            left_node = NULL;
        }
        else
        {
            left_node = new Node(left);
        }
        if (right == -1)
        {
            right_node = NULL;
        }
        else
        {
            right_node = new Node(right);
        }
        parent_node->left = left_node;
        parent_node->right = right_node;

        if (parent_node->left)
        {
            q.push(parent_node->left);
        }
        if (parent_node->right)
        {
            q.push(parent_node->right);
        }
    }

    return root;
}

int total_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = total_nodes(root->left);
    int right = total_nodes(root->right);
    return left + right + 1;
}

int tree_depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = tree_depth(root->left);
    int right = tree_depth(root->right);
    return max(left, right) + 1;
}

int main()
{
    // Write your code here
    Node *root = input_binary_tree();

    int tree = pow(2, tree_depth(root)) - 1;

    if (tree == total_nodes(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
