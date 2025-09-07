class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        cols = len(matrix[0])
        first_row = False
        first_col = False

        for c in range(cols):
            first_row = True if matrix[0][c]==0 else first_row

        for r in range(rows):
            first_col = True if matrix[r][0]==0 else first_col

        for r in range(1, rows):
            for c in range(1, cols):
                if matrix[r][c] == 0:
                    matrix[r][0] = 0
                    matrix[0][c] = 0

        for r in range(1, rows):
            for c in range(1, cols):
                if matrix[r][0] == 0 or matrix[0][c] == 0:
                    matrix[r][c] = 0

        matrix[0][:] = [0]*cols if first_row else matrix[0][:]
        for r in range(rows):
            matrix[r][0] = 0 if first_col else matrix[r][0]