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

# Single Loop Solution
class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count = 0
        i = 0
        j = 1
        k = 2

        while(i < j and j < k and k<= len(nums)-1):
            if (nums[k] - nums[j] == diff) and (nums[j] - nums[i] == diff):
                count += 1
                k += 1
                continue
            elif nums[k] - nums[j] > diff and k > j+1:
                j += 1
                continue
            elif nums[k] - nums[j] < diff:
                k += 1
                continue
            elif nums[j] - nums[i] > diff and j > i+1:
                i += 1
                continue
            elif nums[j] - nums[i] < diff and k > j+1:
                j += 1
                continue
            elif nums[j] - nums[i] < diff and k == j+1:
                j += 1
                k += 1
                continue
            k += 1
        return count 
