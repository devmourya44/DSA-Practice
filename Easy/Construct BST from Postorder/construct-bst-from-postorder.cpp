//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node *help(int post[],int start,int end){
    if(start>end)return NULL;
    Node *root=new Node(post[end]);
    int i=start;
    while( i<=end && post[i]<post[end]){
        i++;
    }
    root->left=help(post,start,i-1);
    root->right=help(post,i,end-1);
    return root;
}
Node *constructTree (int post[], int size)
{
    //code here
    return help(post,0,size-1);
}


