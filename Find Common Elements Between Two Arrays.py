from collections import defaultdict

class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1_counter = defaultdict(int)
        nums2_counter = defaultdict(int)

        for number in nums1:
            nums1_counter[number] += 1
        # print(nums1_counter)

        for number in nums2:
            nums2_counter[number] += 1
        # print(nums2_counter)

        value1 = 0
        for each in nums1:
            print(each, nums2_counter.get(each))
            if nums2_counter.get(each):
                value1 += 1
        
        value2 = 0
        for each in nums2:
            if nums1_counter.get(each):
                value2 += 1
        
        return [value1, value2]