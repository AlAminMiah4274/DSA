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
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent_node = q.front();
        q.pop();

        // --------------
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

        // ----------------
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

int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = count_node(root->left);
    int right = count_node(root->right);
    return left + right + 1;
}

int count_leaf(Node *root)
{
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
        int left = count_leaf(root->left);
        int right = count_leaf(root->right);
        return left + right;
    }
}

int tree_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = tree_height(root->left);
    int right = tree_height(root->right);
    return max(left, right) + 1;
}

int main()
{
    Node *root = input_binary_tree();
    int total_node = count_node(root);
    int leaf_node = count_leaf(root);

    cout << "total node: " << total_node << endl;
    cout << "leaf node: " << leaf_node << endl;

    return 0;
}