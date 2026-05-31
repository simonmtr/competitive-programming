# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        self.lowernode = None
        self.rightnode = None
        self.leftnode = None

        def dfs(root):
            if not root:
                return
            dfs(root.left)
            if self.lowernode and self.lowernode.val > root.val:
                if not self.leftnode:
                    self.leftnode = self.lowernode
                self.rightnode = root
            self.lowernode = root
            dfs(root.right)
        dfs(root)
        self.leftnode.val, self.rightnode.val = self.rightnode.val, self.leftnode.val