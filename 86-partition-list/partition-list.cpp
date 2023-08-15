
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        // Initialize two new dummy nodes for the 'before' and 'after' lists.
        ListNode* before = new ListNode(0);
        ListNode* after = new ListNode(0);
        
        // Use two pointers, one each for the 'before' and 'after' lists, 
        // to help in appending nodes to these lists.
        ListNode* before_curr = before;
        ListNode* after_curr = after;

        // Traverse the original list.
        while (head) {
            // Check the value of the current node.
            if (head->val < x) {
                // If the node's value is less than x, 
                // append it to the 'before' list.
                before_curr->next = head;
                before_curr = before_curr->next;
            } else {
                // If the node's value is greater than or equal to x, 
                // append it to the 'after' list.
                after_curr->next = head;
                after_curr = after_curr->next;
            }

            // Move to the next node in the original list.
            head = head->next;
        }
        
        // Ensure the last node in the 'after' list points to nullptr.
        after_curr->next = nullptr;
        
        // Connect the last node of the 'before' list to the first node 
        // (after the dummy node) of the 'after' list.
        before_curr->next = after->next;
        
        // Return the merged list starting from the first node 
        // (after the dummy node) of the 'before' list.
        return before->next;
    }
};