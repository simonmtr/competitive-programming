class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        highest, lowest = 0, prices[0]
        for price in prices:
            if price < lowest:
                lowest = price
            highest = max(highest, price-lowest)
            
        return highest