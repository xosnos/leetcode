# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        def getLength(self, head):
            length = 0
            while head:
                length += 1
                head = head.next
            return length
        lengthA = getLength(headA)
        lengthB = getLength(headB)
        if 