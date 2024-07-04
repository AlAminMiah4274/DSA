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

void print_middle_element(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->value << endl;
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

    print_middle_element(head);

    return 0;
}