class Solution:
    def countAsterisks(self, s: str) -> int:
        flag = False

        count = 0

        for i in range(len(s)):
            if s[i] == '|':
                if flag == True:
                    flag = False
                else:
                    flag = True
                continue
            if s[i] == '*' and flag == False:
                count += 1

        return count