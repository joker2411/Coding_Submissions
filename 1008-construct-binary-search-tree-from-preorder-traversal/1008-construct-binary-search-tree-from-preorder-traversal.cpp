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
    TreeNode* addNode(TreeNode* head, int key){
        if(head == NULL){
            head = new TreeNode(key);
            return head;
        }
        
        if(key < head->val)
            head->left = addNode(head->left, key);
        else
            head->right = addNode(head->right, key);
        
        return head;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* head = NULL;
        int N = preorder.size();
        
        for(auto x:preorder){
            head = addNode(head, x);
        }
        return head;
    }
};