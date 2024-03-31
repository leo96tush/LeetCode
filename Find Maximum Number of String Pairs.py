class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        words_set = set()

        for word in words:
            if word != word[::-1]:
                words_set.add(word)

        count = 0

        removed_strings = set()

        for word in words_set:
            if word[::-1] in words_set and word not in removed_strings:
                count += 1
                removed_strings.add(word)
                removed_strings.add(word[::-1])
        
        return count