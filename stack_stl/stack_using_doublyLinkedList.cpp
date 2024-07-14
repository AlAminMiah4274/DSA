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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
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
    void pop()
    {
        Node *deletedNode = tail;
        tail = tail->prev;
        delete deletedNode;
        tail->next = NULL;
    }
    int top()
    {
        return tail->value;
    }
    int size()
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
    bool empty()
    {
        if (size() == 0) return true;
        return false;
    }
};

int main()
{
    myStack wallet;

    int q;
    cin >> q;
    while (q--)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        wallet.push(v);
    }

    while (!wallet.empty())
    {
        cout << wallet.top() << endl;
        wallet.pop();
    }

    return 0;
}