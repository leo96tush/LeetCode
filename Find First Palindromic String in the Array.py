class Solution:
    def isPalindrome(self, word_string: str) -> bool:
        if word_string != word_string[::-1]:
                return False
        return True

    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            if self.isPalindrome(word):
                return word
        return ""
