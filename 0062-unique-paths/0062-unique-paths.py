class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        low = min(m-1, n-1)
        high = (m+n-2)
        numr, denr = 1, 1

        for i in range(low):
            numr *= (high-i)
            denr *= (low-i)

        out = numr//denr
        return out