class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        prev = -inf
        for i, num in enumerate(nums):
            if num == 1:
                if i-prev-1 >= k:
                    prev = i
                else:
                    return False
        return True