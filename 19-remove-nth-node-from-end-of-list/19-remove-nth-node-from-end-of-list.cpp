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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int N=0;
        ListNode* node = head;
        
        while(node){
            N++;
            node = node->next;
        }
        
        if(N == 1)
            return NULL;
        
        node = head;
        int k = N - n + 1;
        int i=1;
        
        if(k == 1){
            head= head->next;
            return head;
        }
        
        while(i < k-1){
            node = node->next;
            i++;
        }
        
        node->next = node->next->next;
        return head;
    }
};