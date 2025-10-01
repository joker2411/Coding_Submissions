class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        answer = numBottles
        div, mod = divmod(numBottles, numExchange)
        while div>0:
            answer += div
            numBottles = div+mod
            div, mod = divmod(numBottles, numExchange)
        return answer