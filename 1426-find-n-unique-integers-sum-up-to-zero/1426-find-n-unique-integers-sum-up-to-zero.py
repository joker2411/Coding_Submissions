class Solution:
    def sumZero(self, n: int) -> List[int]:
        res = list()
        if n%2==1:
            res.append(0)
        num = 1
        while num <= (n/2):
            res.append(num)
            res.append(num*(-1))
            num += 1
        return res