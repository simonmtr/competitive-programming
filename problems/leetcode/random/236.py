# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        def dfs(node):
            if not node or node == p or node == q:
                return node
            isinleft = dfs(node.left)
            isinright = dfs(node.right)
            if isinleft and isinright:
                return node
            return isinleft or isinright

        return dfs(root)