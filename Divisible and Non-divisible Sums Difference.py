class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        d = int(n/m)
        return int((n*(n+1)/2) - (m*d*(d+1)))