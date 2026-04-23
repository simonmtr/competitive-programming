"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return None
        visited = {}
        queue = deque([node])
        visited[node] = Node(node.val)
        while queue:
            cur = queue.popleft()
            for n in cur.neighbors:
                if n not in visited:
                    visited[n] = Node(n.val)
                    queue.append(n)
                visited[cur].neighbors.append(visited[n])
        return visited[node]
