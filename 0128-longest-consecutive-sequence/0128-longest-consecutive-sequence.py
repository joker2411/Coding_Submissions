class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        index = set(nums)
        streak = 0

        for num in index:
            if num-1 not in index:
                start = num
                current_streak = 0

                while(start in index):
                    current_streak += 1
                    start += 1

                streak = max(streak, current_streak)
        return streak