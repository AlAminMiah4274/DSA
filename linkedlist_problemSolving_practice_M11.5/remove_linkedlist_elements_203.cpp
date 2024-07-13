/*
Given the head of a singly linked list and an integer val, 
remove all the nodes of the linked list that has Node.val == val, 
and return the new head.

Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Example 2:
Input: head = [], val = 1
Output: []

Example 3:
Input: head = [7,7,7,7], val = 7
Output: []
*/

/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if (head == NULL)
        {
            return head;
        }

        ListNode *del;
        while (head != NULL && head->val == val)
        {
            del = head;
            head = head->next;
            delete del;
        }

        ListNode *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                del = temp->next;
                temp->next = temp->next->next;
                delete del;
            }
            else 
            {
                temp = temp->next;
            }
        }
        
        return head;
    }
};
*/