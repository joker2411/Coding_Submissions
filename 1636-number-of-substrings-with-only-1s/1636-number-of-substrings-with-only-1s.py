class Solution:
    def numSub(self, s: str) -> int:
        MOD = 1000000000+7
        N = len(s)
        index = [0]*(N+1)
        ans, prev = 0, 0
        count = 0
        for ch in s:
            if ch =='1':
                count += 1
                index[count] += 1
            elif ch == '0':
                count = 0

        for i in range(N, 0, -1):
            prev = (prev+index[i])%MOD
            ans = (ans+prev)%MOD
        return ans