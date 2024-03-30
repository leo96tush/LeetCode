class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        
        size_of_output = len(grid) - 1
        
        row_diff = [-1, -1, -1, 0, 0, 0, 1, 1, 1]
        col_diff = [-1, 0, 1, -1, 0, 1, -1, 0, 1]

        output = []
        for i in range(1, len(grid)-1):
            temp_row = []
            for j in range(1, len(grid)-1):
                max_num = 0
                for each_row_diff in row_diff:
                    for each_col_diff in col_diff:
                        max_num = max(max_num, grid[i+each_row_diff][j+each_col_diff])
                temp_row.append(max_num)
            output.append(temp_row)
        return output