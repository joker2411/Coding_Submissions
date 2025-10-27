class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        answer = 0
        index = list()
        for row in bank:
            temp = 0
            for ch in row:
                if ch == '1':
                    temp += 1 
            if temp >0:
                index.append(temp)

        if len(index) <= 1:
            return 0
        for i in range(1, len(index)):
            answer += (index[i]*index[i-1])

        return answer