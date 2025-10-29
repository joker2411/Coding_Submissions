import math

class Solution:
    def smallestNumber(self, n: int) -> int:
        x = int(math.log2(n))
        answer = (2**(x+1)) - 1
        return answer