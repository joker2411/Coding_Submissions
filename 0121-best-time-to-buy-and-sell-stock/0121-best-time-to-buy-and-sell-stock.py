class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = prices[0]
        currentProfit = 0
        maxProfit = 0
        size = len(prices)

        for i in range(1, size):
            if prices[i] < low:
                low = prices[i]
                continue
            currentProfit = prices[i]-low
            if currentProfit > maxProfit:
                maxProfit = currentProfit
        
        return maxProfit