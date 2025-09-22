class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        index = [0]*101
        for num in nums:
            index[num] += 1
        max_freq = max(index)
        result = 0
        for freq in index:
            if freq == max_freq:
                result += 1
        return (result*max_freq)