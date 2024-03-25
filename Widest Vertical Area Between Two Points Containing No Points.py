class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        sorted_list = sorted(points, key=lambda x: x[0])
        max_num = -1
        for i in range(1, len(sorted_list)):
            max_num = max(max_num, sorted_list[i][0]-sorted_list[i-1][0])
        return max_num
