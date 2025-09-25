import heapq
from collections import Counter

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        max_heap = []
        for key, val in freq.items():
            heapq.heappush(max_heap, (-val, key))

        result = list()
        for i in range(k):
            count, num = heapq.heappop(max_heap)
            result.append(num)
        return result