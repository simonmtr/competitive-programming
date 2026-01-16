class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        self.courses = defaultdict(list)
        for course, prerequisite in prerequisites:
            self.courses[course].append(prerequisite)

        self.seen = set()
        def dfs(course):
            if not self.courses[course]:
                return True
            if course in self.seen:
                return False
            self.seen.add(course)
            for c in self.courses[course]:
                if not dfs(c):
                    return False
            self.courses[course] = []
            return True

        for course in range(numCourses):
            if not dfs(course):
                return False
        return True