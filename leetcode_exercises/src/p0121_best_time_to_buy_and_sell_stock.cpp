#include "p0121_best_time_to_buy_and_sell_stock.hpp"

#include <algorithm>

int Solution::maxProfit(std::vector<int>& prices) {
    const int size = static_cast<int>(prices.size());
    int max_profit = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            const int profit = prices[j] - prices[i];
            max_profit = std::max(max_profit, profit);
        }
    }

    return max_profit;
}

/*
 * Big O (n la so ngay):
 * - Time: O(n^2).
 * - Space: O(1).
 */
