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

    Node *temp = head;
    Node *temp2 = head2;
    bool flag = true;
    if (size(head) == size(head2))
    {
        while(temp != NULL)
        {
            if (temp->value != temp2->value)
            {
                flag = false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}