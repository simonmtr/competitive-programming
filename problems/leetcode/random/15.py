class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        l = []

        for i in range(len(nums)):
                if i>0 and nums[i-1] == nums[i]:
                    continue
                
                j = i+1
                k = len(nums)-1

                while j<k:
                    sums = nums[i] + nums[j] + nums[k]
                    if sums>0:
                        k -= 1
                    elif sums < 0:
                        j+=1
                    else:
                        l.append([nums[i], nums[j], nums[k]])
                        j+=1
                        while nums[j-1]==nums[j] and j<k:
                            j+=1
        return l