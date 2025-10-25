class Solution:
    def totalMoney(self, n: int) -> int:
        D, M = divmod(n, 7)
        first_helf = 28 * D
        second_half = 7 * D * (D-1) / 2
        second_half = 0 if second_half<0 else second_half
        third_half, D = 0, D+1
        for i in range(M):
            third_half += D
            D += 1

        return int(third_half+second_half+first_helf)