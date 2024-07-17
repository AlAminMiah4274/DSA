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

class myStack
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
        Node *deletedNode = tail;
        tail = tail->prev;
        delete deletedNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->value;
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
    myStack bookSelf, bookSelf_two;

    int q_one;
    cin >> q_one;
    for (int i = 0; i < q_one; i++)
    {
        int x;
        cin >> x;
        bookSelf.push(x);
    }

    int q_two;
    cin >> q_two;
    for (int i = 0; i < q_two; i++)
    {
        int x;
        cin >> x;
        bookSelf_two.push(x);
    }

    bool flag = true;
    if (bookSelf.node_size() == bookSelf_two.node_size())
    {
        while (!bookSelf.empty())
        {
            if (bookSelf.top() != bookSelf_two.top())
            {
                flag = false;
            }
            bookSelf.pop();
            bookSelf_two.pop();
        }
    }
    else 
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}