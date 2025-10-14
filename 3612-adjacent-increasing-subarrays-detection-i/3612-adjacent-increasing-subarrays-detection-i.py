class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        curr = 0
        answer = list()
        N = len(nums)
        for i in range(1, N):
            if nums[i] <= nums[i-1]:
                answer.append(i-curr)
                curr = i

        if len(answer)==0:
            return True
        answer.append(N-curr)
        for i in range(1, len(answer)):
            if (answer[i]>=k and answer[i-1]>=k) or (answer[i]>=2*k) or (answer[i-1]>=2*k):
                return True
        return False