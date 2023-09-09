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
    ListNode* merge(ListNode* left, ListNode* right) {
        if (!left) return right;
        if (!right) return left;

        ListNode dummy(0);
        ListNode* current = &dummy;

        while (left && right) {
            if (left->val < right->val) {
                current->next = left;
                left = left->next;
            } else {
                current->next = right;
                right = right->next;
            }
            current = current->next;
        }

        if (left) current->next = left;
        if (right) current->next = right;

        return dummy.next;
    }

    // Find the middle of the linked list using the slow and fast pointer technique
    ListNode* findMiddle(ListNode* head) {
        if (!head) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Merge Sort for linked list (in-place)
    ListNode* mergeSort(ListNode* head) {
        if (!head || !head->next) {
            return head; // Base case: empty or single-node list is already sorted
        }

        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;

        ListNode* leftSorted = mergeSort(head);
        ListNode* rightSorted = mergeSort(right);

        return merge(leftSorted, rightSorted);
    }

    // Function to sort the linked list in-place without using extra space
    ListNode* sortList(ListNode* head) {
        // Call the mergeSort function to sort the linked list
        return mergeSort(head);
    }
};