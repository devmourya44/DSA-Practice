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
    void recurse(Node* ptr, Node* prev){
        if(ptr==NULL){
            return;
        }
        if(ptr->child){
            Node* temp = ptr->next;
            ptr->next = ptr->child;
            ptr->child->prev = ptr;
            recurse(ptr->child, temp);
            ptr->child = NULL;
        }
        recurse(ptr->next, prev);
        if(prev && ptr->next == NULL){
            ptr->next = prev;
            prev->prev = ptr;
        }
        return;
    }
    
    Node* flatten(Node* head) {
        if(!head){
            return head;
        }
        recurse(head, NULL);
        return head;
    }
};