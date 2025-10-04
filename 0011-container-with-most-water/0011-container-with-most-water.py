class Solution:
    def maxArea(self, height: List[int]) -> int:
        N = len(height)
        i, j = 0, N-1
        answer = 0
        while i<j:
            curr = (j-i) * min(height[i], height[j])
            answer = max(curr, answer)
            if height[i] >= height[j]:
                j -= 1
            else:
                i += 1
        return answer