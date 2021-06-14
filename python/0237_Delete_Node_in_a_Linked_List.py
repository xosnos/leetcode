# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        node.val = node.next.val # Set node value to the next node value
        node.next = node.next.next # Point next to the node after the next
        
# O(1) Time
# O(1) Space
