from collections import Counter

class Solution:
    def sortedCounter(self, vals, x):
        index = Counter(vals)
        sorted_val = sorted(set(vals), key=lambda x: (-index[x], -x))
        answer = sum(val*index[val] for val in sorted_val[:x])
        return answer

    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        N = len(nums)
        res = list()
        for i in range(N):
            if i+k-1 >= N:
                break
            res.append(self.sortedCounter(nums[i:i+k], x))
        return res