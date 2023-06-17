#include <bits/stdc++.h> 
/*Update the minPrice if it is greater than the current element of the array
Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
Return the maxPro.
*/
int maximumProfit(vector<int> &prices){
    int max_profit=0,min_buy=INT_MAX;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<min_buy){
            min_buy=prices[i];
        }
        max_profit=max(max_profit,prices[i]-min_buy);  
    }
    return max_profit;

}
