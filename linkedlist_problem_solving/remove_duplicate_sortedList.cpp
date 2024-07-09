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

void remove_duplicate_node(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        if (temp->value == temp->next->value)
        {
            temp->next = temp->next->next;
        }
        if (temp->next == NULL)
        {
            break;
        }
        else if (temp->value != temp->next->value)
        {
            temp = temp->next;
        }
    }
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
    
    remove_duplicate_node(head);
    print_linked_list(head);

    return 0;
}