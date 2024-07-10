/*
To delete a node in singly linked list: 

public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *removedNode = node->next;
        node->next = node->next->next;
        delete removedNode;
    }
};
*/