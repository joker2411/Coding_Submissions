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
    int goodNodes(TreeNode* node, int maxi){
        if(node == NULL)
            return 0;
        int k = goodNodes(node->left, max(maxi, node->val)) + goodNodes(node->right, max(maxi, node->val));
        if(node->val >= maxi)
            k++;
        return k;
    }
    
    int goodNodes(TreeNode* root) {
        return goodNodes(root, INT_MIN);
    }
};