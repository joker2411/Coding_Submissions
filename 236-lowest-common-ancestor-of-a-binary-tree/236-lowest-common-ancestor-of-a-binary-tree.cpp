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
    bool exist(TreeNode* node, TreeNode* pt){
        if(node == pt)
            return true;
        if(node == NULL)
            return false;
        return exist(node->left, pt) || exist(node->right, pt);
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = NULL;
        if((exist(root->left, p) && exist(root->right, q)) || (exist(root->left, q) && exist(root->right, p)) || (root == p) || (root == q))
            res = root;
        else if(exist(root->left, p) && exist(root->left, q))
            res = lowestCommonAncestor(root->left, p, q);
        else
            res = lowestCommonAncestor(root->right, p, q);
        
        return res;
    }
};