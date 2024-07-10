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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // tail->next = newNode;
    // newNode->prev = tail;
    // tail = newNode;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;
}

void insert_at_position(Node *head, int position, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        if (temp == NULL)
        {
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

int size(Node *head)
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
    // int Q;
    // cin >> Q;
    // for (int i = 0; i < Q; i++)
    // {
        Node *head = NULL;
        Node *tail = NULL;

    //     int posi, val;
    //     cin >> posi >> val;
    //     if (posi == 0)
    //     {
    //         insert_at_head(head, tail, val);
    //     }
    //     else if (posi == (size(head) - 1))
    //     {
    //         insert_at_tail(head, tail, val);
    //     }
    //     else
    //     {
    //         insert_at_position(head, posi, val);
    //     }

    //     if (posi >= size(head))
    //     {
    //         cout << "invalid" << endl;
    //     }
    //     else
    //     {
    //         print_linked_list(head);
    //         print_reverse(tail);
    //     }
    // }
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

    int posi, v;
    cin >> posi >> v;
    if (posi == 0)
    {
        insert_at_head(head, tail, v);
    }
    else if (posi == (size(head) - 1))
    {
        insert_at_tail(head, tail, v);
    }
    else if (posi >= size(head))
    {
        cout << "invalid" << endl;
    }
    else 
    {
        insert_at_position(head, posi, v);
    }

    print_linked_list(head);
    print_reverse(tail);


    return 0;
}