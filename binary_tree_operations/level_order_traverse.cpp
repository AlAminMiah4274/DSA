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

// void level_order(Node *root)
// {
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         // take the first node from the queue 
//         Node *first_node = q.front();
//         q.pop();

//         // do all work to be done of this node 
//         cout << first_node->value << " ";

//         // send the children of this node to the queue 
//         if (first_node->left) q.push(first_node->left);
//         if (first_node->right) q.push(first_node->right);
//     }
// }

void level_order(Node *root)
{
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node *first_node = q.front();
        q.pop();

        cout << first_node->value << " ";

        // if (first_node->left) q.push(first_node->left);
        // if (first_node->right) q.push(first_node->right);

        if (first_node->right) q.push(first_node->right);
        if (first_node->left) q.push(first_node->left);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    a->left = c;
    c->right = e;
    a->right = h;
    h->right = i;

    root->right = b;
    b->right = d;
    d->left = f;
    d->right = g;

    level_order(root);

    return 0;
}