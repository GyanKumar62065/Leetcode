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
        
        ListNode* temp = node;
        
        while(temp->next != NULL)
        {
            temp->val = temp->next->val;
            ListNode* del = temp;
             temp = temp->next;
            if(temp->next == NULL)
            {
                del->next = NULL;
            }  
        }
    }
};