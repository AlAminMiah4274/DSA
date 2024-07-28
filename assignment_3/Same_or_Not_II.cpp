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
        if(tail == NULL)
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
    myStack stackA;
    myQueue queueB;

    int N, M;
    cin >> N >> M;

    
    for (int i = 0; i < N; i++)
    {
        int n_val;
        cin >> n_val;
        stackA.push(n_val);
    }

    
    for (int i = 0; i < M; i++)
    {
        int m_val;
        cin >> m_val;
        queueB.push(m_val);
    }

    bool flag = true;
    if (stackA.node_size() == queueB.node_size())
    {
        while (!stackA.empty())
        {
            if (stackA.top() != queueB.front())
            {
                flag = false;
                break;
            }
            stackA.pop();
            queueB.pop();
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