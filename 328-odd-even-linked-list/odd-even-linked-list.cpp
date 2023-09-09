class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
          return NULL;
        ListNode* o=NULL;      //for traversing and connecting odd index nodes
        ListNode* es=NULL;     //for linking last odd node to first even index node
        ListNode* ee=NULL;     //for traversing and connecting even index node
        ListNode* curr=head;   //for traversing original linked list
        int count=1;           //for checking even and odd index
        while(curr!=NULL){
            if(count&1){
                if(o==NULL){
                    o=curr;
                }
                else{
                    o->next=curr;
                    o=o->next;
                }
            }
            else if(count%2==0){
                if(es==NULL){
                    es=curr;
                    ee=curr;
                }
                else{
                    ee->next=curr;
                    ee=ee->next;
                }
            }
            count++;
            curr=curr->next;
        }
        o->next=es;
        if(ee!=NULL)
           ee->next=NULL;
        return head;
        
    }
};