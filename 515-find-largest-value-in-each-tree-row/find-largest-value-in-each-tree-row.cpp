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

 
// class Solution {
// public:
//     vector<int> largestValues(TreeNode* root) {
//         map <int, int> mp;
//         queue <pair<TreeNode*, int>> que;
//         que.push({root, 0});

//         while(!que.empty()){
//           int val = que.front().second;
//           TreeNode* node = que.front().first;
//           que.pop();

//           if(node == NULL)
//             continue;
          
//           if(mp.find(val) == mp.end())
//             mp[val] = node->val;
//           else
//             mp[val] = max(mp[val], node->val);

//           que.push({node->left, val+1});
//           que.push({node->right, val+1});
//         }

//         vector <int> ans;
//         for(auto x: mp)
//           ans.push_back(x.second);

//         return ans;
    
//     }
// };


class Solution {
public:
    vector<int> arr;
    void preOrder(TreeNode* Node,  int level){
        if (Node== NULL) return;
        if (arr.size()<=level) arr.push_back(INT_MIN);
        arr[level]=max(arr[level], Node->val);

        preOrder(Node->left, level+1);
        preOrder(Node->right, level+1);     
    }

    vector<int> largestValues(TreeNode* root) {
        if (root==NULL) return {};
        preOrder(root, 0);
        return arr;
    }
};