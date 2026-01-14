# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        
        res = []
        def search(root, curpath, cursum):
            if not root: return
            cursum += root.val
            curpath.append(root.val)
            if not root.left and not root.right and cursum == targetSum:
                res.append(curpath[:])
            search(root.left, curpath, cursum)
            search(root.right, curpath, cursum)
            curpath.pop()
        search(root, [], 0)
        return res