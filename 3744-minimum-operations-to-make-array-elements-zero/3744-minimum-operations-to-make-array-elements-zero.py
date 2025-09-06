class Solution:
    def num_steps(self, l, r) -> int:
        L = 1
        S = 1
        steps = 0
        while r >= L:
            R = (4 ** S) - 1
            num_elements = max(min(R, r) - max(L, l) + 1, 0)
            steps = steps + num_elements * S
            S = S+1
            L = 4**(S-1)
        print("steps: ", steps)
        return steps

    def minOperations(self, queries: List[List[int]]) -> int:
        result = 0
        for query in queries:
            result = result + (self.num_steps(query[0], query[1])+1) // 2
        return result