class Solution {
public:
    ListNode* reverse(ListNode* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
      
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        int carry=0;
        while( head1!=NULL&&head2!=NULL){
            int sum=head1->val+head2->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head1=head1->next;
            head2=head2->next;
        }
        while(head1!=NULL){
            int sum=head1->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head1=head1->next;
        }
        while(head2!=NULL){
            int sum=head2->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head2=head2->next;
        }
        while(carry!=0){
            ListNode* temp=new ListNode(carry);
            anstail->next=temp;
            carry=carry/10;
        }
        return anshead;
    }
};