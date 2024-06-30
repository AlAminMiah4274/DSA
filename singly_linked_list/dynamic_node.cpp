#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(260);
    // Node *messi = new Node(37);
    // Node *di_maria = new Node(36);
    // head->next = messi;
    // messi->next = di_maria;

    // cout << head->next->next->value << endl;
    // cout << head->value << endl;
    // cout << messi->value << endl;

    cout << head->value << endl;

    return 0;
}