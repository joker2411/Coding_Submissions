/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int findLength(ListNode* node){
        if(node == NULL)
            return 0;
        
        return 1+findLength(node->next);
    }
    // void printList(ListNode* node){
    //     if(node == NULL){
    //         cout<<endl;
    //         return;
    //     }
    //     cout<<node->val<<"--";
    //     printList(node->next);
    // }
    
    bool isPalindrome(ListNode* head) {
        int N = findLength(head);
        if(N == 1)
            return true;
        int half = N/2;
        
        int temp = 0;
        ListNode* node = head;
        ListNode* prev = NULL;
        ListNode* next = node->next;
        
        while(temp < half){
            node->next = prev;
            prev = node;
            node = next;
            next = node->next;
            temp++;
        }
        
        head->next = node;
        if(N%2 == 1)
            node = node->next;
        
        // printList(prev);
        // cout<<prev->val<<"--"<<node->val<<"--"<<endl;
        
        while(node){
            if(prev->val != node->val)
                return false;
            prev = prev->next;
            node = node->next;
        }
        
        return true;
    }
};