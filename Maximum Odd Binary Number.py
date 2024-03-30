class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        digit_list = list(s)
        sum_of_digits = sum(digit_list)
        length_of_string = len(s)
        output_string = ""
        if sum(digit_list) == 1:
            for i in range(length_of_string-1)
                output_string += '0'
            return output_string + '1'
        else:
            for i in range(sum_of_digits-1):
                output_string += '1'
            for i in range(length_of_string - sum_of_digits - 1):
                output_string += '0'
            return output_string + '1'