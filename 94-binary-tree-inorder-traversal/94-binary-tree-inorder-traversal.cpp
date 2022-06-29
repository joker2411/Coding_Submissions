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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == NULL)
            return res;
        
        stack<TreeNode*> st;
        
        TreeNode* node = root;
        while(node != NULL || st.empty() != true){
            while(node != NULL){
                st.push(node);
                node = node->left;
            }
            node = st.top();
            res.push_back(node->val);
            st.pop();
            node = node->right;
        }
        return res;
    }
};