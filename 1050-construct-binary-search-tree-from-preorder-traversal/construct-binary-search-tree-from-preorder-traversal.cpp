/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode *solve(vector<int>&pre,int s,int e)
    {
        if(s>e)return NULL;
        TreeNode *r=new TreeNode(pre[s]);

        int root=r->val;
        int i=s+1; //root next is start of its left
        while(i<=e && pre[i]<root)i++;

        r->left = solve(pre,s+1,i-1);
        r->right =solve(pre,i,e);

        return r;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return solve(preorder,0,preorder.size()-1);
    }

};