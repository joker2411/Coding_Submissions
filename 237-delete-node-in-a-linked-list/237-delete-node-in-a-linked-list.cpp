/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int data = node->next->val;
        ListNode* temp = node->next;
        
        node->val = data;
        node->next = temp->next;
        
        temp->next = NULL;
        delete(temp);
        
        return;
    }
};