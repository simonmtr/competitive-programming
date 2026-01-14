# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        
        def search(root, sumval):
            if not root:
                return False
            if not root.left and not root.right:
                sumval += root.val
                return sumval == targetSum
            
            return search(root.left, sumval+root.val) or search(root.right, sumval+root.val)
        return search(root, 0)
