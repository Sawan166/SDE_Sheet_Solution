class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, min_price = prices[0];
        for(int i=0;i<prices.size()-1;i++){
            min_price=min(min_price, prices[i]);
            max_profit=max(max_profit,prices[i+1]-min_price);
        }
        return max_profit;
    }
};
