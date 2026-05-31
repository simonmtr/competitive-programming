class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        order = defaultdict(list)

        for s in strs:
            key = "".join(sorted(s))
            order[key].append(s)

        return list(order.values())