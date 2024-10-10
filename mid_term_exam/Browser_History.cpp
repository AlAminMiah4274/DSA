#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    string data;
    Node *next;
    Node *prev;
    
    Node(string data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert(Node *&head, Node *&tail, string val)
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

void node_visit(Node *head, Node *&current, string site)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == site)
        {
            cout << temp->data << endl;
            current = temp;
            return;
        }
        else temp = temp->next;
    }

    cout << "Not Available" << endl;
}

void node_next(Node *&current)
{
    if (current->next != NULL)
    {
        current = current->next;
        cout << current->data << endl;
        return;
    }
    else 
    {
        cout << "Not Available" << endl;
    }
}

void node_prev(Node *&current)
{
    if(current->prev != NULL)
    {
        current = current->prev;
        cout << current->data << endl;
        return;
    }
    else 
    {
        cout << "Not Available" << endl;
    }
}



int main() {
    
    Node *head = NULL;
    Node *tail = NULL;
    
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert(head, tail, val);
    }
    
    Node *current = head;
    
    
    int q;
    cin >> q;
    cin.ignore();
    
    while (q--)
    {
        string command;
        getline(cin, command);
        
        

        if (command.substr(0, 6) == "visit ")
        {
            string addr = command.substr(6);
            node_visit(head, current, addr);
        } 
        else if (command == "next")
        {
            node_next(current);
        } 
        else if (command == "prev")
        {
            node_prev(current);
        }
    }

    return 0;
}