//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0121_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0121_H
#include "../SolutionCommon.h"


/// 121. 买卖股票的最佳时机 ez

// 给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。

// 你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。

// 返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){
            return 0;
        }
        int maxProfit=0;
        int min=prices[0];

        for(const auto & price:prices){
            maxProfit=std::max(maxProfit,(price-min));
            min=std::min(price,min);
        }
        return maxProfit;

    }
};



#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0121_H
