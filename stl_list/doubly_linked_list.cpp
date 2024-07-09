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
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    head->prev = newNode;
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

void remove_head(Node *&head, Node *&tail)
{
    Node *removedNode = head;
    head = head->next;
    delete removedNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void remove_tail(Node *&head, Node *&tail)
{
    Node *removedNode = tail;
    tail = tail->prev;
    delete removedNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void remove_from_position(Node *head, int position)
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
    Node *removedNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete removedNode;
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

    /* ---------- INSERT ------------ */
    // int pos, v;
    // cin >> pos >> v;
    // if (pos == 0)
    // {
    //     insert_at_head(head, tail, v);
    // }
    // else if (pos == node_size(head))
    // {
    //     insert_at_tail(head, tail, v);
    // }
    // else if (pos > node_size(head))
    // {
    //     cout << "invalid" << endl;
    // }
    // else 
    // {
    //     insert_at_position(head, pos, v);
    // }

    /* ------------- DELETE ------------ */
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        remove_head(head, tail);
    }
    else if (pos == (node_size(head) - 1))
    {
        remove_tail(head ,tail);
    }
    else if (pos >= node_size(head))
    {
        cout << "invalid" << endl;
    }
    else 
    {
        remove_from_position(head, pos);
    }



    print_linked_list(head);
    print_reverse(tail);

    return 0;
}