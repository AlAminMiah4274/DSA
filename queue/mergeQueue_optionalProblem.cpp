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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int size = 0;
    void push(int val)
    {
        size++;
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

    void pop()
    {
        size--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->value;
    }

    int node_size()
    {
        return size;
    }

    bool empty()
    {
        if (node_size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myQueue counter, counter_two;

    int q_one;
    cin >> q_one;
    for (int i = 0; i < q_one; i++)
    {
        int x;
        cin >> x;
        counter.push(x);
    }

    int q_two;
    cin >> q_two;
    for (int i = 0; i < q_two; i++)
    {
        int x;
        cin >> x;
        counter_two.push(x);
    }

    while (!counter_two.empty())
    {
        counter.push(counter_two.front());
        counter_two.pop();
    }

    while (!counter.empty())
    {
        cout << counter.front() << " ";
        counter.pop();
    }

    return 0;
}