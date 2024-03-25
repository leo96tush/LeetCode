class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        result = []
        for i, each in enumerate(words):
            if x in each:
                result.append(i)
        return result