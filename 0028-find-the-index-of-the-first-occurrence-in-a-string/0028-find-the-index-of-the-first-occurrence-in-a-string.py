class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        haystack_size = len(haystack)
        needle_size = len(needle)
        start = 0
        while(start+needle_size <= haystack_size):
            if haystack[start:start+needle_size] == needle:
                return start
            start += 1
        return -1