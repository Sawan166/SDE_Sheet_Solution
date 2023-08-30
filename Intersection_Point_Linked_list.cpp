class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * p=headA,*q=headB;
        while(p != q){
            p=p==NULL?headB:p=p->next;
            q=q==NULL?headA:q=q->next;
        }
        return p;
    }
};
