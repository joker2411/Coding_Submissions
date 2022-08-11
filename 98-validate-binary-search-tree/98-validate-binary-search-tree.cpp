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
    void checkInOrder(TreeNode* node, vector<int>& ans){
        if(node == NULL)
            return ;
        checkInOrder(node->left, ans);
        ans.push_back(node->val);
        checkInOrder(node->right, ans);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        checkInOrder(root, ans);
        
        int N = ans.size();
        for(int i=1; i<N; i++){
            if(ans[i] <= ans[i-1])
                return false;
        }
        return true;
    }
};