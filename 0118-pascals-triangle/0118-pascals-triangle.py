class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        final_list = list()
        for i in range(numRows):
            current_list = [1]*(i+1)
            for j in range(1, i):
                current_list[j] = final_list[i-1][j-1] + final_list[i-1][j]
            final_list.append(current_list)
        return final_list