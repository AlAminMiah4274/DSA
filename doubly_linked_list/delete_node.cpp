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
/* ----------------------------------- */
// void delete_from_position(Node *head, int position)
// {
//     Node *temp = head;
//     for (int i = 1; i <= position - 1; i++)
//     {
//         if (temp == NULL)
//         {
//             return;
//         }
//         temp = temp->next;
//     }
//     if (temp->next == NULL)
//     {
//         return;
//     }
//     Node *deleteNode = temp->next;
//     temp->next = temp->next->next;
//     temp->next->prev = temp;
//     delete deleteNode;
// }

// void delete_tail(Node *&tail)
// {
//     Node *deleteNode = tail;
//     tail = tail->prev;
//     delete deleteNode;
//     tail->next = NULL;
// }

// void delete_head(Node *&head)
// {
//     Node *deleteNode = head;
//     head = head->next;
//     delete deleteNode;
//     head->prev = NULL;
// }
/* --------------------------------- */

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
    Node *removedNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete removedNode;
}

void remove_tail(Node *&tail)
{
    Node *removedNode = tail;
    tail = tail->prev;
    delete removedNode;
    tail->next = NULL;
}

void remove_head(Node *&head)
{
    Node *removedNode = head;
    head = head->next;
    delete removedNode;
    head->prev = NULL;
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
    Node *head = NULL;
    Node *tail = NULL;

    // taking input the nodes 
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

    // removing the nodes to depend on input position 
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        remove_head(head);
    }
    else if (pos >= node_size(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == node_size(head) - 1)
    {
        remove_tail(tail);
    }
    else 
    {
        remove_from_position(head, pos);
    }

    // printing 
    print_linked_list(head);
    print_reverse(tail);

    return 0;
}