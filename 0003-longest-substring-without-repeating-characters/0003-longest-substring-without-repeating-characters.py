class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        low, high = 0, 0
        max_length = 0
        index = set()
        while(high < len(s)):
            if s[high] not in index:
                index.add(s[high])
                max_length = max(max_length, len(index))
                high += 1
            elif s[high] in index:
                while(s[low] != s[high]):
                    index.remove(s[low])
                    low += 1
                low += 1
                high += 1
        return max_length