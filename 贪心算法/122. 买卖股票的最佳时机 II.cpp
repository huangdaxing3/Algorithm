//
// Created by xiaoli on 22-11-27.
//
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int count;
        for (int i = 1; i < prices.size(); i++) {
            count = prices[i] - prices[i-1];
            if (count > 0) result += count;
        }
        return result;
    }
};