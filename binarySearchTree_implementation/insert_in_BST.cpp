#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left, *right;
    Node(int value)
    {
        this->value = value;
        this->left = right = NULL;
    }
};

Node *input_in_BST()
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

        int left, right;
        cin >> left >> right;

        Node *left_node, *right_node;
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

void print_BST(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *parent_node = q.front();
        q.pop();

        cout << parent_node->value << " ";

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

/*
complexity: 
O(NH) N values --> best case: O(N log N), worst case: O(N^2),
O(H) 1 value --> best case: O(log N), worst case: O(N) 
*/ 
void insert_in_BST(Node *root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else 
        {
            insert_in_BST(root->left, x);
        }
    }
    else 
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else 
        {
            insert_in_BST(root->right, x);
        }
    }
}

int main()
{
    Node *root = input_in_BST();

    insert_in_BST(root, 13);
    insert_in_BST(root, 7);
    print_BST(root);

    return 0;
}