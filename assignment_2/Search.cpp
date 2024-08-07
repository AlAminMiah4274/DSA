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

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
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

        int x;
        cin >> x;
        bool flag = false;
        int count = 0;
        for (Node *i = head; i != NULL; i = i->next)
        {
            count++;
            if(i->value == x)
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
        {
            cout << count - 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}