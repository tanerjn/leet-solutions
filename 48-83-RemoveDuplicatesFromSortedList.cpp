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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

    while (current && current->next) {
        if (current->val == current->next->val) {
            // Duplicate found, remove it
            ListNode* duplicate = current->next;
            current->next = current->next->next;
            delete duplicate;
        } else {
            // Move to the next node
            current = current->next;
        }
    }

    return head;
    }
};
