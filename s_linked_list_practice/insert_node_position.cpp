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

void insert_node(Node *&head, Node *&tail, int val)
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

void insert_at_position(Node *head, int position, int val)
{
    Node *newNode = new Node(val);
    
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
        insert_node(head, tail, val);
    }

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int index, node_value;
        cin >> index >> node_value;
        if (index == 0)
        {
            insert_at_head(head, node_value);
        }
        else 
        {
            insert_at_position(head, index, node_value);
        }

        print_linked_list(head);
    }

    return 0;
}