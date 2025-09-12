class Solution:
    def doesAliceWin(self, s: str) -> bool:
        for vowel in {'a', 'e', 'i', 'o', 'u'}:
            if vowel in s:
                return True
        return False