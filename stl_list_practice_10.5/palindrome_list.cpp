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

void make_reverse(Node *&head, Node *&tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *palindrome_head = NULL;
    Node *palindrome_tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
        insert_at_tail(palindrome_head, palindrome_tail, val);
    }

    make_reverse(palindrome_head, palindrome_tail);

    Node *temp = head;
    Node *p_temp = palindrome_head;
    bool flag = true;
    while (temp != NULL)
    {
        if (temp->value != p_temp->value)
        {
            flag = false;
        }
        temp = temp->next;
        p_temp = p_temp->next;
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