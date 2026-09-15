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

        ListNode* newList = new ListNode();
        ListNode* answer = newList;
        while(list1 && list2) {
            auto firstValue = list1->val;
            auto secondValue = list2->val;

            if(firstValue <= secondValue) {
                newList->next = new ListNode(firstValue);
                list1 = list1->next;
            }
            else {
                newList->next = new ListNode(secondValue);
                list2 = list2->next;
            }
            newList = newList->next;
        }

        if(!list1) {
            newList->next = list2;
        }

        if(!list2) {
            newList->next = list1;
        }

        return answer->next;
    }
};
