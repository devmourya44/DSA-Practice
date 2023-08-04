/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
            if(head->next==NULL) return 1;
            string str="";
            while(head){
                str+=to_string(head->val);
                head=head->next;
                
            }
            int i=0;
            int j=str.size()-1;
            while(i<=j){
                if(str[i]!=str[j])return 0;
                i++;j--;
            }
            return 1;

    }
};