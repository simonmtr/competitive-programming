# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []

        res = []
        queue = deque([root])
        zig = True

        while queue:
            level = len(queue)
            cur_level = deque()

            for i in range(level):
                node = queue.popleft()
                if zig:
                    cur_level.append(node.val)
                else:
                    cur_level.appendleft(node.val)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            res.append(list(cur_level))
            zig = not zig
        return res




