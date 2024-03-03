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
private: 

    int findLength(ListNode *root){
        ListNode *head = root;
        int cnt = 0;
        if(!head) return cnt;
        while(head != nullptr){
            cnt++;
            head = head->next;
        }
        return cnt;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length = findLength(head);
        int traveseTill = length - n - 1;

        if(traveseTill == -1) return head->next;
        int i = 0;
        ListNode *curr = head;
        while(i < traveseTill){
            curr = curr->next;
            i++;
        }
        curr->next = curr->next->next;
        return head;
        
    }
};