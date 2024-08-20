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

void pre_order(Node *root)
{
    if (root == NULL) return;
    cout << root->value << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(Node *root)
{
    if (root == NULL) return;
    post_order(root->left);
    post_order(root->right);
    cout << root->value << " ";
}

void in_order(Node *root)
{
    if (root == NULL) return;
    in_order(root->left);
    cout << root->value << " ";
    in_order(root->right);
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

    // connection:
    root->left = a;
    a->left = c;
    a->right = h;
    h->right = i;
    c->right = e;

    root->right = b;
    b->right = d;
    d->left = f;
    d->right = g;

    cout << "pre order: ";
    pre_order(root);
    cout << endl;

    cout << "post order: ";
    post_order(root);
    cout << endl;

    cout << "in order: ";
    in_order(root);
    cout << endl;

    return 0;
}