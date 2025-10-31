class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        index = set()
        answer = list()
        for num in nums:
            if num in index:
                answer.append(num)
            else:
                index.add(num)
        return answer