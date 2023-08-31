class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode * temp=head;
        int co=1;
        while(temp->next!=NULL){
            co++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%co;
        k=co-k;
        ListNode* y=temp;
        while(k--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
