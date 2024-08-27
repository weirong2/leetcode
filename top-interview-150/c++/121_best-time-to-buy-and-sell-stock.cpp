class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        int arrLength = prices.size();
        for (int i = 0; i < arrLength; i++) {
            /*
            for (int j = 0; j < arrLength; j++) {
                if (j>i) {
                    maxProfit = max((prices[j] - prices[i]), maxProfit);
                }
            }
            */
            minPrice = min(prices[i], minPrice);
            maxProfit = max(prices[i] - minPrice, maxProfit);
        }
        return maxProfit;
    }
};

