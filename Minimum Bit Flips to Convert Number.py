class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        xor_output = start ^ goal

        flips = 0
        while xor_output:
            flips += xor_output & 1
            xor_output >>= 1
        
        return flips