# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        t = [head]
        p = head
        while (p and p.next):
            for i in range(0, len(t)):
                if t[i] == p.next:
                    return True
            t.append(p.next)
            p = p.next
        return False
        