# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def goodNodes(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
    
        def checksubtree(root, greatestAbove):
            if not root:
                return 0
            res = 1 if root.val >= greatestAbove else 0
            greatestAbove = max(greatestAbove, root.val)
            res += checksubtree(root.left, greatestAbove)
            res += checksubtree(root.right, greatestAbove)
            return res

        return checksubtree(root, root.val)