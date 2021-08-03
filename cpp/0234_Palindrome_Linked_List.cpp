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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
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
    bool isPalindrome(ListNode* head) {
        ListNode* middle = middleNode(head);
        ListNode* second = reverseList(middle);
        ListNode* first = head;
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

// O(N) Time
// O(1) Space