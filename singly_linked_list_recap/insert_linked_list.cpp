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

// void insert_at_tail(Node *head, int val) // O(N) 
// {
//     Node *newNode = new Node(val);

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

void insert_at_position(Node *head, int position, int val) // O(N) 
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int node_size(Node *head) // O(N) 
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

void print_linked_list(Node *head) // O(N) 
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

void insert_head(Node *&head, int val) // O(1) 
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val) // O(1) 
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    int pos, val;
    cin >> pos >> val;
    if (pos > node_size(head))
    {
        cout << "Invalid index" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val); 
    }
    else if (pos == node_size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }

    print_linked_list(head);

    return 0;
}