class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* temp=head;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        ListNode * t=new ListNode(0);
        t->next=head;
        ListNode* prev=t;
        ListNode* cur,* nex;
        while(c>=k){
             cur=prev->next;
             nex=cur->next;
             for(int i=1;i<k;i++){
                cur->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = cur->next;
             }
             prev=cur;
             c-=k;
        }
        return t->next;
    }
};
