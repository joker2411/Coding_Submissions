class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        small, large = min(num1, num2), max(num1, num2)
        answer = 0
        while small != 0:
            mult, rem = divmod(large, small)
            answer += mult
            small, large = rem, small
        return answer