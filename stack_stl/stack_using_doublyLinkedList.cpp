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
    int stack_size()
    {
        // Node *temp = head; // O(N)
        // int count = 0;
        // while (temp != NULL)
        // {
        //     count++;
        //     temp = temp->next;
        // }
        // return count;

        return size; // O(1)
    }
    bool empty()
    {
        if (stack_size() == 0)
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
    myStack wallet;

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int v;
    //     cin >> v;
    //     if (v == -1)
    //     {
    //         break;
    //     }
    //     wallet.push(v);
    // }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        wallet.push(x);
    }

    while (!wallet.empty())
    {
        cout << wallet.top() << endl;
        wallet.pop();
    }

    return 0;
}