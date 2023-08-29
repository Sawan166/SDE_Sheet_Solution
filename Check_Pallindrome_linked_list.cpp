class Solution {
    ListNode* reverse(ListNode* ptr) {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow=slow->next;
        ListNode * temp=head;
        while(slow!=NULL){
            if(temp->val!=slow->val) return false;
            temp=temp->next,slow=slow->next;
        }
        return true;
    }
};
