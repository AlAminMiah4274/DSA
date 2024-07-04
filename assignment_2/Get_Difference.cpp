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

int max_node(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    while (temp != NULL)
    {
        if (temp->value > max)
        {
            max = temp->value;
        }
        temp = temp->next;
    }

    return max;
}

int min_node(Node *head)
{
    Node *temp = head;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (temp->value < min)
        {
            min = temp->value;
        }
        temp = temp->next;
    }

    return min;
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

    cout << max_node(head) - min_node(head) << endl;

    return 0;
}