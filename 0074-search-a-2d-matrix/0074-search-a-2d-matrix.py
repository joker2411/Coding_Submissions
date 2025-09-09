class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows = len(matrix)
        cols = len(matrix[0])

        lowR, highR = 0, rows-1
        flagR = False

        while(lowR<=highR):
            midR = (lowR+highR)//2
            if target >= matrix[midR][0] and target <= matrix[midR][cols-1]:
                flagR = True
                break
            elif target < matrix[midR][0]:
                highR = midR-1
            elif target > matrix[midR][cols-1]:
                lowR = midR+1
        
        if not flagR:
            return False
        
        lowC, highC = 0, cols-1

        while(lowC <= highC):
            midC = (lowC + highC)//2
            if target == matrix[midR][midC]:
                return True
            elif target < matrix[midR][midC]:
                highC = midC-1
            elif target > matrix[midR][midC]:
                lowC = midC+1

        return False