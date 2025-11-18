class Solution:
    def isOneBitCharacter(self, bits: List[int]) -> bool:
        N, i = len(bits), 0
        if bits[N-1] != 0:
            return False

        while i < N-1:
            if bits[i] == 0:
                i += 1
            elif bits[i] == 1 and i < N-2:
                i += 2
            elif bits[i] == 1 and i == N-2:
                return False
        return True