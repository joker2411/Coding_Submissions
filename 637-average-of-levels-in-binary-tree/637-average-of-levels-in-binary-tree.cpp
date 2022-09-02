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
    vector<double> ans;
    
//     void printq(queue<TreeNode*> q){
//         while(!q.empty()){
//             cout<<q.front()->val<<"--";
//             q.pop();
//         }
//         cout<<endl;
//     }
    
    void levelAverage(queue<TreeNode*> q1){
        if(q1.empty())
            return;
        
        queue<TreeNode*> q2;
        double sum = 0;
        int num = 0;
        while(!q1.empty()){
            TreeNode* temp = q1.front();
            q1.pop();
            
            sum += temp->val;
            num++;
            
            if(temp->left != NULL)  q2.push(temp->left);
            if(temp->right != NULL)  q2.push(temp->right);
        }
        sum = (double)(sum/num);
        ans.push_back(sum);
        
        // printq(q1);
        // printq(q2);
        
        levelAverage(q2);
        return ;
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        levelAverage(q);
        return ans;
    }
};