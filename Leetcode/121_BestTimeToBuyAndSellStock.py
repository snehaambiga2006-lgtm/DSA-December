class Solution(object):
    def maxProfit(self, prices):
        
        buy_price=float('inf')
        max_profit=0
    
        for sell_price in prices:
            if buy_price > sell_price :
                buy_price = sell_price
            else:
                profit=sell_price - buy_price
            
                if profit>max_profit :
                    max_profit=profit
        return max_profit
   
        


