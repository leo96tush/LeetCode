# Brute Force Method
class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count = 0
        for k in range(2, len(nums)):
            for j in range(1, k):
                for i in range(0, j):
                    if (nums[j] - nums[i] == diff) and (nums[k] - nums[j] == diff):
                        count += 1
        return count
