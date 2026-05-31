class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        self.paths = collections.defaultdict(list)

        for node, edges in enumerate(graph):
            self.paths[node] = edges
        
        res = []
        def dfs(cur_path, cur_node):
            if cur_node == len(self.paths) - 1:
                res.append(list(cur_path))
            
            for con in self.paths[cur_node]:
                cur_path.append(con)
                dfs(cur_path, con)
                cur_path.pop()
        
        dfs([0], 0)
        return res