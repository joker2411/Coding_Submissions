class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        answer = list()
        nums.sort()
        size = len(nums)
        def DFS(start, path):
            if start > size:
                return
            
            answer.append(path)
            for i in range(start, size):
                if i > start and nums[i] == nums[i-1]:
                    continue
                DFS(i+1, path+[nums[i]])
        
        DFS(0, [])
        return answer