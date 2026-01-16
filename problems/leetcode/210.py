class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        self.courses = defaultdict(list)
        for course, prerequisite in prerequisites:
            self.courses[course].append(prerequisite)

        self.curq = set()
        self.seen = set()
        self.order = []
        def dfs(course):
            if course in self.seen:
                return True
            if course in self.curq:
                return False
            self.curq.add(course)
            for c in self.courses[course]:
                if not dfs(c):
                    return False
            self.curq.remove(course)
            self.seen.add(course)
            self.order.append(course)
            return True

        for course in range(numCourses):
            if not dfs(course):
                return []
        return self.order