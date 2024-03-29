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
    ListNode* reverseList(ListNode* head) {

        if(head==nullptr) return head;

        ListNode *temp = head;

        ListNode *ans = nullptr;

        while(temp){
            ListNode *currNode = temp;
            temp = temp->next;
            currNode->next = ans;
            ans = currNode;
        }

        return ans;

    }
};