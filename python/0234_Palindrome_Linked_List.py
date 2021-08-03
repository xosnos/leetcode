# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        
        def middleNode(head):
            fast = slow = head
            while fast and fast.next:
                fast = fast.next.next
                slow = slow.next
            return slow
        
        def reverseList(head):
            prev = None
            while head:
                nextNode = head.next
                head.next = prev
                prev = head
                head = nextNode
            return prev
        
        middle = middleNode(head)
        second = reverseList(middle)
        first = head
        while second:
            if first.val != second.val:
                return False
            first = first.next
            second = second.next
        return True

# O(N) Time
# O(1) Space