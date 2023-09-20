class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;
        
        int leftDepth = getLeftDepth(root);
        int rightDepth = getRightDepth(root);
        
        if (leftDepth == rightDepth)
            return (1 << leftDepth) - 1;
        else
            return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
private:
    int getLeftDepth(TreeNode* node) {
        int depth = 0;
        while (node) {
            depth++;
            node = node->left;
        }
        return depth;
    }
    
    int getRightDepth(TreeNode* node) {
        int depth = 0;
        while (node) {
            depth++;
            node = node->right;
        }
        return depth;
    }
};
