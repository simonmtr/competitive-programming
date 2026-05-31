class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def dfs(visited, cur_subset):
            if len(cur_subset) == len(nums):
                res.append(cur_subset)
                return
            for i in range(len(nums)):
                if i not in visited:
                    visited.add(i)
                    dfs(visited, cur_subset+[nums[i]])
                    visited.remove(i)
        dfs(set(), [])
        return res
                    
            