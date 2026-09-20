#include "p0121_best_time_to_buy_and_sell_stock.hpp"

#include <algorithm>

int Solution::maxProfit(std::vector<int>& prices) {
    if (prices.empty()) {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (const int price : prices) {
        min_price = std::min(min_price, price);
        max_profit = std::max(max_profit, price - min_price);
    }
    return max_profit;
}

/*
 * Big O (n la so ngay):
 * - Time: O(n).
 * - Space: O(1).
 */
