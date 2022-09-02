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
    void createVector(TreeNode* node, vector<int>& nums){
        if(node == NULL)
            return ;
        
        createVector(node->left, nums);
        nums.push_back(node->val);
        createVector(node->right, nums);
        return ;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        createVector(root, nums);
        
        int N = nums.size();
        int start = 0, end = N-1;
        
        while(start < end){
            if((nums[start]+nums[end]) == k)
                return true;
            else if((nums[start]+nums[end]) < k)
                start++;
            else
                end--;
        }
        return false;
    }
};