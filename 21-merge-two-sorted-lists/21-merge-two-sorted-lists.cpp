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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head, *temp;
        
        if(list1 == NULL && list2 == NULL)
            return NULL;
        else if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        
        if(list2->val < list1->val){
            head = temp = list2;
            list2 = list2->next;
        }
        else{
            head = temp = list1;
            list1 = list1->next;
        }
        
        while(list1 != NULL && list2 != NULL){
            
            if(list2->val < list1->val){
                temp->next = list2;
                temp = temp->next;
                list2 = list2->next;
                temp->next = NULL;
            }
            else{
                temp->next = list1;
                temp = temp->next;
                list1 = list1->next;
                temp->next = NULL;
            }
        }
        if(list1 == NULL)
        {
            while(list2 != NULL){
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        else{
            while(list1 != NULL){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }
        }
        
        return head;
    }
};