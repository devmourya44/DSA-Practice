/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case
        if(root == NULL){
            return NULL;
        }
        // check the current node first
        if(root == p){
            return p; // Found p
        }
        if(root == q){
            return q; // Found q
        }
        // Ans from left subtree
        TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
        // Ans from right subtree
        TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);
        // Answer not found
        if(leftAns == NULL && rightAns == NULL){
            return NULL;
        }
        // Ans found in left
        else if(leftAns != NULL && rightAns == NULL){
            return leftAns;
        }
        // Ans found in right
        else if(leftAns == NULL && rightAns != NULL){
            return rightAns;
        }
        // LCA found
        else{
            return root;
        }


    }
};