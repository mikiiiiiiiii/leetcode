class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy;
        if(prices.size()==0 || prices.size()==1){
            return profit;
        }
        buy = prices[0];
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] > buy){
                int newprof = prices[i] - buy;
                if(newprof > profit){
                    profit = newprof;
                }
            }
            if(prices[i] < buy){
                buy = prices[i];
            }
        }
        return profit;
    }
};
