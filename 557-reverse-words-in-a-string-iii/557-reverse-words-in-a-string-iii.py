class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split(' ')
        ans = str()
        for x in l:
            x = x[::-1]
            ans += x +' '
        
        return ans[:-1]