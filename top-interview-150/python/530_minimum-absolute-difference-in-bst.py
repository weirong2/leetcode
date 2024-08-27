# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flat(self, root):
        if root is None:
            return
        self.flat_list.append(root.val)
        self.flat(root.left)
        self.flat(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        self.flat_list = []
        self.flat(root)
        self.flat_list = list(sorted([x for x in self.flat_list if x is not None]))
        #print(self.flat_list)
        self.min_diff = self.flat_list[1] - self.flat_list[0]
        for x in range(1, len(self.flat_list)-1):
            t = self.flat_list[x+1] - self.flat_list[x]
            #print(self.flat_list[x+1], self.flat_list[x], t)
            if t < self.min_diff:
                self.min_diff = t
        return self.min_diff
        