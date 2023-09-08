class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp) {
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count==n) {
            if(head->next) {
                head=head->next;
            }
            else {
                head=NULL;
            }
        }
        while(--count>n) {
            temp=temp->next;
        }
        if(temp->next && temp->next->next) {
            ListNode* rem=temp->next;
            temp->next=rem->next;
        }
        else if(temp->next) {
            temp->next=NULL;
        }
        return head;
    }
};