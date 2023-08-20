class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    struct ListNode * prev = NULL, *next, *curr = head;
    if(head == NULL || head->next == NULL)
        return head;
    while (curr != NULL) {        
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    }
};
