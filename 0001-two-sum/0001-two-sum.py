class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        size = len(nums)
        for i in range(size):
            complement = target - nums[i]
            if complement in d:
                return [d[complement], i]
            d[nums[i]] = i
        return None