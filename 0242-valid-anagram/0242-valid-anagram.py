class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        index = dict()
        for letter in s:
            index[letter] = index.get(letter, 0) + 1

        for letter in t:
            if letter not in index:
                return False
            index[letter] -= 1
            if index[letter] < 0:
                return False

        for _, count in index.items():
            if count > 0:
                return False
        return True