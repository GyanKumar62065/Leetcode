/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {

        

        }
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:



public:
    ListNode* removeZeroSumSublists(ListNode* head) {

        vector<int>temp;
        ListNode* lt = head;
        while(lt != nullptr){
            temp.push_back(lt->val);
            lt = lt->next;
        }

        vector<pair<int,int>>v;

        for(int i =0; i <temp.size(); i++){
            int sum = 0;
            for(int j = i; j < temp.size(); j++){
                sum += temp[j];

                if(sum == 0){
                    for(int k = i; k <= j; k++){
                        temp[k] = 0;
                    }
                }
            }
        }

        lt = head;

        ListNode* prev = head;

        bool allZero = false;
        for(auto it : temp){
            if(it != 0){
                allZero = true;
                lt->val = it;
                prev = lt;
                lt = lt->next;
            }

        }
        prev->next = nullptr;

        if(allZero == 0){
            return nullptr;
        }

      
        

        return head;
    }
};