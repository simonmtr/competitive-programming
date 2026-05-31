# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        if not root:
            return []
        res = []
        temp = [] 
        def dfs(node):
            if not node:
                return
            temp.append(str(node.val))
            if not node.right and not node.left:
                res.append("->".join(temp))
            else:
                dfs(node.right)
                dfs(node.left)
            temp.pop()
        dfs(root)
        return res
