# Solution 1
class Solution:
    def countDigits(self, num: int) -> int:
        numbers = list(str(num))
        count = 0
        for number in numbers:
            if num % int(number) == 0:
                count += 1 
        return count


