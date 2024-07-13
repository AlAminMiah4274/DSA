/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]
*/

/*
class Solution {
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nthNode = size(head) - n;
        ListNode *del;
        if (nthNode == 0)
        {
            del = head;
            head = head->next;
            delete del;
        }
        else 
        {
            ListNode *temp = head;
            for (int i = 1; i <= nthNode - 1; i++)
            {
                temp = temp->next;
            }
            del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        return head;
    }
};
*/