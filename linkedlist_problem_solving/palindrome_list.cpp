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

    return 0;
}

/*
to check is a list palindrome or not:

1. copy the list
2. reverse the list
3. check the copy and original list



class Solution {
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void make_reverse(ListNode *&head, ListNode *current)
    {
        if (current->next == NULL)
        {
            head = current;
            return;
        }
        make_reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
       ListNode *newHead = NULL;
       ListNode *newTail = NULL;

       ListNode *temp = head;
       while (temp != NULL)
       {
            insert_tail(newHead, newTail, temp->val);
            temp = temp->next;
       }

       make_reverse(newHead, newHead);

       temp = head;
       ListNode *myNode = newHead;
       while (myNode != NULL)
       {
            if (myNode->val != temp->val)
            {
                return false;
            }
            temp = temp->next;
            myNode = myNode->next;
       }
       return true;
    }
};
*/