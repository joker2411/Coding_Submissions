# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head
        size = 0
        
        while(node):
            size += 1
            node = node.next

        mid = int(size//2) + 1
        node = head

        for i in range(1, mid):
            node = node.next

        return node