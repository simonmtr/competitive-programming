# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        self.mindep = 1000001
        if not root:
            return 0

        def search(curdep, root):
            if not root:
                return
            if not root.left and not root.right:
                self.mindep = min(curdep, self.mindep)
            search(curdep + 1, root.left)
            search(curdep + 1, root.right)

        search(1, root)
        return self.mindep