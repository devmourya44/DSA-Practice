
class Solution {
public:

    int length(ListNode * ptr)
    {
        int len = 0;
        while(ptr)
        {
            len++;
            ptr = ptr->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = length(head);
        if(n < k) return head;
        if(head == NULL) return head;

        ListNode * cur = head, *temp = NULL, *pre = NULL;
        int cnt = 0;
        while(cur!=NULL && cnt < k)
        {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
            cnt++;
        }

        head->next = reverseKGroup(temp,k);
        return pre;

    }
};