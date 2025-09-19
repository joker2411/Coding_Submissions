from typing import Tuple

class Spreadsheet:

    def __init__(self, rows: int):
        self.matrix = [[0]*26 for _ in range(rows+1)]

    def getRowCol(self, cell: str) -> Tuple[int, int]:
        row = int(cell[1:])
        col = ord(cell[0]) - ord('A')
        return row, col

    def setCell(self, cell: str, value: int) -> None:
        row, col = self.getRowCol(cell)
        self.matrix[row][col] = value

    def resetCell(self, cell: str) -> None:
        self.setCell(cell, 0)

    def getCell(self, cell: str) -> int:
        row, col = self.getRowCol(cell)
        return self.matrix[row][col]

    def verifyCell(self, cell: str) -> bool:
        ascii_val = ord(cell[0]) - ord('A')
        if 0 <= ascii_val < 26:
            return True
        return False

    def getValue(self, formula: str) -> int:
        input_list = formula[1:].split('+')
        total = 0
        for val in input_list:
            total += self.getCell(val) if self.verifyCell(val) else int(val)
        return total


# Your Spreadsheet object will be instantiated and called as such:
# obj = Spreadsheet(rows)
# obj.setCell(cell,value)
# obj.resetCell(cell)
# param_3 = obj.getValue(formula)