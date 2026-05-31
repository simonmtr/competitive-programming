# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """

        diameter = [0]

        def calc(node):
            if not node:
                return 0
            left = calc(node.left)
            right = calc(node.right)
            diameter[0] = max(diameter[0], left+right)
            return max(left, right) + 1
        calc(root)
        return diameter[0]
        