class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        answer = numBottles
        while numBottles-numExchange>=0:
            numBottles = numBottles - numExchange + 1
            answer += 1
            numExchange += 1
        return answer