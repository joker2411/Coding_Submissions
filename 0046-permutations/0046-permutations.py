class Solution:
    def listPermute(self, nums, result, curr_list):
        if len(nums) == 0:
            result.append(curr_list.copy())
            return

        for i in range(len(nums)):
            curr_val = nums.pop(i)
            curr_list.append(curr_val)
            self.listPermute(nums, result, curr_list)
            curr_list.pop()
            nums.insert(i, curr_val)

    def permute(self, nums: List[int]) -> List[List[int]]:
        result = list()
        self.listPermute(nums, result, [])
        return result