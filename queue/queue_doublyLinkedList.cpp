#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node (int value)
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

        // if (head == NULL)
        // {
        //     tail = NULL;
        //     delete deletedNode;
        //     return;
        // }
        // head->prev = NULL;
        // delete deletedNode;

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
    // myQueue counter;

    // counter.push(1500);
    // counter.push(500);
    // counter.push(1000);

    // // counter.pop();
    // // counter.pop();

    // // cout << counter.front() << endl;
    // // cout << counter.node_size() << endl;

    // if (!counter.empty())
    // {
    //     cout << counter.front() << endl;
    // }

    myQueue counter;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        counter.push(x);
    }

    while (!counter.empty())
    {
        cout << counter.front() << endl;
        counter.pop();
    }

    return 0;
}