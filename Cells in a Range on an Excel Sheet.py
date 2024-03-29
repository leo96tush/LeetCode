class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        col_i = s[0]
        row_i = s[1]
        col_f = s[3]
        row_f = s[4] 
        
        output = []

        for col in range(ord(col_i), ord(col_f)+1):
            for row in range(int(row_i), int(row_f) + 1):
                output.append(str(chr(col))+str(row))
        return output
