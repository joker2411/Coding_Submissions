class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        stack = {}
        for num in arr:
            if num in stack:
                stack[num] += 1
            else:
                stack[num] = 1
        li = stack.values()
        return len(list(set(li))) == len(list(li))