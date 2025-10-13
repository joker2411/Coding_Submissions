from collections import Counter

class Solution:
    def __init__(self):
        self.index = None

    def isAnagram(self, word):
        if not self.index:
            return False

        counter = Counter(word)
        if counter == self.index:
            return True
        return False

    def removeAnagrams(self, words: List[str]) -> List[str]:
        answer = list()
        for word in words:
            if self.isAnagram(word):
                continue
            else:
                answer.append(word)
                self.index = Counter(word)
        return answer