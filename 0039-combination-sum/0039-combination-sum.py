class Solution:
    def backtrack(self, start, candidates, target, final_list, curr_list):
        if target < 0:
            return
        if target == 0:
            final_list.append(curr_list.copy())
            return

        for i in range(start, len(candidates)):
            curr_list.append(candidates[i])
            self.backtrack(i, candidates, target-candidates[i], final_list, curr_list)
            _ = curr_list.pop()

    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        final_list = list()
        curr_list = list()
        self.backtrack(0, candidates, target, final_list, curr_list)
        return final_list