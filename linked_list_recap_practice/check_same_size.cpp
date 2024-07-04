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

void print_linked_list(Node *head)
{
    cout << "linked list: ";
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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int node_val;
    while (true)
    {
        cin >> node_val;
        if (node_val == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, node_val);
    }

    if(node_size(head) == node_size(head2))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}