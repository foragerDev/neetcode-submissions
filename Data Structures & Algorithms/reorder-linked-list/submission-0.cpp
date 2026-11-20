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
    void reorderList(ListNode* head) {
        head = recurse(head, head->next);
        // std::cout << head->val << std::endl;
    }

    ListNode* recurse(ListNode* root, ListNode* current) {
        if (current == nullptr) return root;

        root = recurse(root, current->next);
        if (root == nullptr) return nullptr;
        // std::cout << root->val << std::endl;

        ListNode* temp = nullptr;

        if (root == current || root->next == current) {
            // std::cout << "Root & and Current is Equal" << std::endl;
            // std::cout << root->val << std::endl;
            // std::cout << current->next->val;
            current->next = nullptr;
        } else {
            temp = root->next;
            root->next = current;
            current->next = temp;

            // std::cout << root->val << "->" << root->next->val << "->" << current->next->val << std::endl;
        }
        // std::cout << (temp? to_string(temp->val) : "NULL") << std::endl;
        return temp;
    }
};
