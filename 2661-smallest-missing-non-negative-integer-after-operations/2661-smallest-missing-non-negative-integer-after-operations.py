class Solution:
    def findSmallestInteger(self, nums: List[int], value: int) -> int:
        index = [0]*value
        for i in range(len(nums)):
            index[nums[i]%value] += 1

        answer = 0
        while True:
            for k in range(value):
                if index[k] == 0:
                    return answer+k
                else:
                    index[k] -= 1
            answer += value