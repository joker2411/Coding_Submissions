class Solution:
    def hasSameDigits(self, s: str) -> bool:
        while len(s) > 2:
            temp = ""
            for i in range(1, len(s)):
                digitSum = (ord(s[i-1]) + ord(s[i]) - 2*ord('0')) % 10
                temp += str(digitSum)
            s = temp

        if s[0] == s[1]:
            return True
        return False