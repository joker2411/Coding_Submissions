class Solution:
    def backtrack(self, index: int, s: str, answer: set, path: str):
        if index == len(s):
            answer.add(path)
            return

        self.backtrack(index+1, s, answer, path+s[index])
        if (0 <= (ord(s[index])-ord('a')) < 26) or (0 <= (ord(s[index])-ord('A')) < 26):
            self.backtrack(index+1, s, answer, path+s[index].swapcase())
    
    def letterCasePermutation(self, s: str) -> List[str]:
        answer = set()
        self.backtrack(0, s, answer, "")
        return list(answer)