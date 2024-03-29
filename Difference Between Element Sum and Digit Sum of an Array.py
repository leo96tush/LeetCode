class Solution:
    def digitSum(self, number: int) -> int:
        num_sum = 0
        while(number > 0):
            num_sum += (number % 10)
            number = number//10
        return num_sum

    def differenceOfSum(self, nums: List[int]) -> int:
        sum1, sum2 = 0, 0
        for num in nums:
            sum1 += self.digitSum(num)
            sum2 += num
        return abs(sum2-sum1)
