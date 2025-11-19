class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        index = set(nums)
        while original in index:
            original = original*2
        return original