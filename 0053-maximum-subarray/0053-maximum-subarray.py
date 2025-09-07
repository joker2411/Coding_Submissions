class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cum_sum = 0
        size = len(nums)
        for i in range(size):
            cum_sum += nums[i]
            if cum_sum<=0:
                cum_sum = 0
            else:
                nums[i] = cum_sum
        max_sum = max(nums)
        return max_sum