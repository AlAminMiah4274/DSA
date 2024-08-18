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

    pre_order(root);

    return 0;
}