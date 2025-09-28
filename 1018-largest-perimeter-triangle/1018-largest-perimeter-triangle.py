class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        answer = 0
        size = len(nums)
        for i in range(size-1, 1, -1):
            first, second, third = nums[i], nums[i-1], nums[i-2]
            if (second+third) > first:
                answer = first+second+third
                break
        return answer