/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head || !head->next && !head->child) return head;
        Node* ans=head;
        while(head->next && !head->child)head=head->next;

        Node * after=flatten(head->next);
        Node* current=head;
        if(head->child) head->child->prev=head;
        head->next=flatten(head->child);
        head->child=NULL;
        while(head->next)head=head->next;
        if(after)  after->prev=head;
        head->next=after;
        
        return ans;
    }
};