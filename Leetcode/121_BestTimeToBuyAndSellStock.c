#include<stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int buy_price=INT_MAX;
    int max_profit=0;
    int profit =0;

    for(int i=0; i< pricesSize;i++){
        int sell_price= prices[i];
        if(buy_price>sell_price){
            buy_price=sell_price;
        }
        else{

            profit=sell_price-buy_price;
        }
        if(profit>max_profit)
        {
            max_profit=profit;
        }

    }
    return max_profit;
}
