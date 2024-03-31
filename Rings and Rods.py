from collections import defaultdict

class Solution:
    def countPoints(self, rings: str) -> int:
        dictionary = defaultdict(set)
        for i in range(0, len(rings), 2):
            dictionary[rings[i+1]].add(rings[i])
        
        count = 0
        for k,v in dictionary.items():
            if len(v) == 3:
                count += 1

        return count