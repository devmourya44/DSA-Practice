//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* head=NULL;
    Node* curr=head;
    while(head1!=NULL && head2!=NULL){
         if(head1->data <= head2->data){
             if(head==NULL){
                 head=head1;
                 curr=head1;
             }
             else{
                 curr->next=head1;
                 curr=head1;
             }
             head1=head1->next;
         }//if_outer
         else{
             if(head==NULL){
                 head=head2;
                 curr=head2;
             }
             else{
                 curr->next=head2;
                 curr=head2;
             }
             head2=head2->next;
         }//outer_else
    }//while
    
    //might be one of the list still left ...,
    
    while(head1!=NULL){//if first list still is there
        curr->next=head1;
        curr=head1;
        head1=head1->next;
    }
    
    while(head2!=NULL){////if second list still is there
        curr->next=head2;
        curr=head2;
        head2=head2->next;
    }
    
    return head;
}  




