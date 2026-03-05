class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        
        def dfs(cur_path, start, cur_sum):
            if cur_sum == target:
                res.append(cur_path)
                return
            for i in range(start, len(candidates)):
                cur_num = candidates[i]
                if candidates[i] <= (target-cur_sum):
                    dfs(cur_path + [candidates[i]], i, cur_sum + candidates[i])
        dfs([], 0, 0)
        return res