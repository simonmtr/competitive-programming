class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        leftpointer = 0
        rightpointer = len(numbers) - 1
        
        while leftpointer < rightpointer:
            cursum = numbers[leftpointer] + numbers[rightpointer]
            if cursum == target:
                return [leftpointer+1, rightpointer+1]
            elif cursum < target:
                leftpointer += 1
            else:
                rightpointer -= 1