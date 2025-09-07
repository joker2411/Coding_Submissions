class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeroes_count = 0
        ones_count = 0
        twos_count = 0
        for num in nums:
            if num == 0:
                zeroes_count += 1
                continue
            if num == 1:
                ones_count += 1
                continue
            if num == 2:
                twos_count += 1
                continue
        for i in range(zeroes_count):
            nums[i] = 0
        for i in range(zeroes_count, zeroes_count+ones_count):
            nums[i] = 1
        for i in range(zeroes_count+ones_count, zeroes_count+ones_count+twos_count):
            nums[i] = 2