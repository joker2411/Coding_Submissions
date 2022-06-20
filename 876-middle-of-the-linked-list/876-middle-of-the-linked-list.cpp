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
    ListNode* middleNode(ListNode* head) 
    {
        int size = 0;
        ListNode* temp = new ListNode();
        temp = head;
        while(temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        
        int mid = ceil((size+1)/2.0);
        int count=1;
        
        temp=head;
        
        while(count < mid)
        {
            temp = temp->next;
            count++;
        }
        
        return temp;
    }
};