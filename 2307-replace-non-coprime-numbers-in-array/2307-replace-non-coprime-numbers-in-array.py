class Solution:
    def gcd(self, a, b):
        while a%b!=0:
            a, b = b, a%b
        return b

    def lcm(self, a, b, gcd=None):
        if not gcd:
            gcd = self.gcd(a, b)
        lcm = abs(a*b)//gcd
        return lcm

    def optimise_list(self, result: List[int]):
        while True:
            if len(result)==1:
                break
            gcd = self.gcd(result[-1], result[-2])
            if gcd==1:
                break
            lcm = self.lcm(result[-1], result[-2], gcd)
            result.pop(-1)
            result.pop(-1)
            result.append(lcm)

    def replaceNonCoprimes(self, nums: List[int]) -> List[int]:
        result = [nums[0]]
        for num in nums[1:]:
            result.append(num)
            self.optimise_list(result)
        return result