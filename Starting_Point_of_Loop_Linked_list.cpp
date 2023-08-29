class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode * match=head;
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(!(fast && fast->next)) return NULL;
        while(match!=slow){
            match=match->next;
            slow=slow->next;
        }
        return match;
    }
};
