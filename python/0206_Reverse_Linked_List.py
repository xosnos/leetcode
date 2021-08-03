# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        prev = None
        while head:
            nextNode = head.next
            head.next = prev
            prev = head
            head = nextNode
        return prev

# Dummyhead Solution
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        dummy = ListNode(-1)
        dummy.next = head
        while head and head.next:
            nextNode = head.next
            head.next = head.next.next
            nextNode.next = dummy.next
            dummy.next = nextNode
        return dummy.next
      
# O(n) Time
# O(1) Space
