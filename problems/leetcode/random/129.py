# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        
        self.totalsum = 0

        def dfs(root, curnumber):
            if not root:
                return
            curnumber+=str(root.val)
            if not root.left and not root.right:
                self.totalsum += int(curnumber)
                return
            dfs(root.left, curnumber)
            dfs(root.right, curnumber)

        dfs(root, '')
        return self.totalsum
