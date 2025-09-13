from collections import Counter

class Solution:
    def maxFreqSum(self, s: str) -> int:
        keys_to_pop = ['a', 'e', 'i', 'o', 'u']
        max_vowel = 0
        max_consonant = 0
        index = Counter(s)
        for key in keys_to_pop:
            max_vowel = max(max_vowel, index.get(key, 0))
            index.pop(key, 0)
        for _, value in index.items():
            max_consonant = max(max_consonant, value)
        return max_vowel+max_consonant