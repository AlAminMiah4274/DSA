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

void delete_node(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        // if (temp == NULL)
        // {
        //     return;
        // }
    }
    // if (temp->next->next == NULL)
    // {
    //     return;
    // }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    cout << "your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int node_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);

    int pos;
    cin >> pos;
    if (pos >= node_size(head))
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        delete_node(head, pos);
    }

    print_linked_list(head);

    return 0;
}