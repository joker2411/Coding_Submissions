class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        N = len(nums)
        target = nums[0]
        count = 1
        for num in nums[1:]:
            if num == target:
                count += 1
            elif count == 1:
                target = num
            else:
                count -= 1
        return target