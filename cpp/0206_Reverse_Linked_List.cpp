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
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        while (head && head->next) {
            ListNode* nextNode = head->next;
            head->next = head->next->next;
            nextNode->next = dummy->next;
            dummy->next = nextNode;
        }
        return dummy->next;
    }
};

// O(N) Time
// O(1) Space
