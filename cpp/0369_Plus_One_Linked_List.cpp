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
    ListNode* plusOne(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* notNine = dummy;
        while (head) {
            if (head->val != 9) notNine = head;
            head = head->next;
        }
        notNine->val++;
        notNine = notNine->next;
        while (notNine) {
            notNine->val = 0;
            notNine = notNine->next;
        }
        delete notNine;
        return dummy->val ? dummy : dummy->next;
    }
};

// O(N) Time
// O(1) Space