# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """

        self.tempnode = None

        def createlinkedlist(oldnode):
            if not oldnode:
                return
            createlinkedlist(oldnode.right)
            createlinkedlist(oldnode.left)
            oldnode.right = self.tempnode
            oldnode.left = None
            self.tempnode = oldnode

        createlinkedlist(root)
