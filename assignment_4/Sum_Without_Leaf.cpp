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

// void print_binary_tree(Node *root)
// {
//     queue<Node *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         Node *parent_node = q.front();
//         q.pop();

//         cout << parent_node->value << " ";

//         if (parent_node->left)
//         {
//             q.push(parent_node->left);
//         }
//         if (parent_node->right)
//         {
//             q.push(parent_node->right);
//         }
//     }
// }

// int sum = 0;
// void print_leaf_node(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (root->left != NULL || root->right != NULL)
//     {
//         sum += root->value;
//     }
//     print_leaf_node(root->left);
//     print_leaf_node(root->right);
//     return;
// }


void print_leaf_node(Node *root, int &sum)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL || root->right != NULL)
    {
        sum += root->value;
    }
    print_leaf_node(root->left, sum);
    print_leaf_node(root->right, sum);
    return;
}

int main()
{
    Node *root = input_binary_tree();
    // sum = 0;
    // print_leaf_node(root);
    
    int sum = 0;
    print_leaf_node(root, sum);

    cout << sum;

    return 0;
}