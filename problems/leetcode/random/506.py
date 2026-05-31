class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        n = len(score)
        res = [0] * n
        heap = []
        r = ["Gold Medal", "Silver Medal", "Bronze Medal"]

        for index, s in enumerate(score):
            heappush(heap, (-s, index))

        place = 1
        while heap:
            s, index = heappop(heap)
            if place < 4:
                res[index] = r[place - 1]
            else:
                res[index] = str(place)
            place += 1
        return res