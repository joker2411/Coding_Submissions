class Solution:
    def maxIncreasingSubarrays(self, nums: List[int]) -> int:
        curr = 0
        answer = list()
        N = len(nums)
        K = 0
        for i in range(1, N):
            if nums[i] <= nums[i-1]:
                answer.append(i-curr)
                curr = i

        answer.append(N-curr)
        if len(answer) == 1:
            return answer[0]//2
        
        for i in range(1, len(answer)):
            K = max(K, min(answer[i], answer[i-1]), answer[i]//2, answer[i-1]//2)
        return K