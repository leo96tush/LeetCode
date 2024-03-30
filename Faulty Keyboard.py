class Solution:
    def finalString(self, s: str) -> str:
        output_string = ''

        for letter in s:
            if letter == 'i':
                output_string = output_string[::-1]
            else:
                output_string += letter

        return output_string
        