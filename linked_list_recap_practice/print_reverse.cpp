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
    tail = newNode;
}

void print_linked_list_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    print_linked_list_reverse(temp->next);
    cout << temp->value << " ";
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

    print_linked_list_reverse(head);

    return 0;
}