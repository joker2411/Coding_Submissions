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
    int findLength(ListNode *node){
        if(node == NULL)
            return 0;
        
        int len = 0;
        while(node != NULL){
            len++;
            node = node->next;
        }
        return len;
    }
    
    ListNode* moveForward(ListNode* node, int n){
        while(n > 0){
            node = node->next;
            n--;
        }
        return node;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *nodeA = headA, *nodeB = headB;
        
        int N1 = findLength(nodeA);
        int N2 = findLength(nodeB);
        int diff = abs(N1-N2);
        
        if(N1 > N2)
            nodeA = moveForward(nodeA, diff);
        else if(N1 < N2)
            nodeB = moveForward(nodeB, diff);
        
        while(nodeA != nodeB && nodeA != NULL){
            nodeA = nodeA->next;
            nodeB = nodeB->next;
        }
        
        if(nodeA == nodeB)
            return nodeA;
        else
            return NULL;
    }
};