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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void head_delete(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        if (temp == NULL)
        {
            return;
        }
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

int main()
{
    Node *head = NULL;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, V);
        }
        else if (V == 0)
        {
            head_delete(head);
        }
        else if (X == 2)
        {
            delete_at_position(head, V);
        }

        print_linked_list(head);
    }

    return 0;
}