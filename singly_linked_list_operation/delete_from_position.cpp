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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_position(Node *head, int position, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{
    cout << "your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_from_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: print linked list" << endl;
        cout << "Option 3: insert at any position" << endl;
        cout << "Option 4: insert at head" << endl;
        cout << "Option 5: delete from position" << endl;
        cout << "Option 6: terminate" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            int tail_val;
            cin >> tail_val;
            insert_at_tail(head, tail_val);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int posi, posi_val;
            cin >> posi >> posi_val;

            if (posi == 0)
            {
                insert_at_head(head, posi_val);
            }
            else
            {
                insert_at_position(head, posi, posi_val);
            }
        }
        else if (option == 4)
        {
            int head_val;
            cin >> head_val;
            insert_at_head(head, head_val);
        }
        else if (option == 5)
        {
            int del_posi;
            cin >> del_posi;
            delete_from_position(head, del_posi);
        }
        else if (option == 6)
        {
            break;
        }
    }

    return 0;
}