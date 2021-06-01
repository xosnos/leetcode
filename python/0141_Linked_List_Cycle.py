# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if not head or not head.next:
            return False
        fastPointer = head.next
        slowPointer = head
        while fastPointer and fastPointer.next:
            if (fastPointer == slowPointer or
                    fastPointer.next == slowPointer):
                return True
            fastPointer = fastPointer.next.next
            slowPointer = slowPointer.next
        return False
