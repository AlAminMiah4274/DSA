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

Node *array_to_BST(int arr[], int left, int right)
{
    if (left > right)
    {
        return NULL;
    }

    int mid = (left + right) / 2;

    Node *root = new Node(arr[mid]);
    Node *left_node = array_to_BST(arr, left, mid - 1);
    Node *right_node = array_to_BST(arr, mid + 1, right);
    root->left = left_node;
    root->right = right_node;

    return root;
}

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    Node *root = array_to_BST(numbers, 0, n - 1);
    print_BST(root);

    return 0;
}