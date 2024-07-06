#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_position(Node *head, int position, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if (temp != NULL)
        {
            return;
        }
    }
    if (temp->next != NULL)
    {
        return;
    }
    newNode->next = temp->next;
    // newNode = temp->next->prev;
    temp->next = newNode;
    // temp->next = newNode->prev;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int pos, pos_val;
    cin >> pos >> pos_val;
    insert_at_position(head, pos, pos_val);

    print_linked_list(head);
    print_reverse(tail);

    return 0;
}