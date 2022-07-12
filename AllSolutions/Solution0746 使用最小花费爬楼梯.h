//
// Created by hpf on 22-5-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0746_使用最小花费爬楼梯_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0746_使用最小花费爬楼梯_H

#include "../SolutionCommon.h"

// 746. 使用最小花费爬楼梯 ez

// 给你一个整数数组 cost ，其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。一旦你支付此费用，即可选择向上爬一个或者两个台阶。

// 你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。

// 请你计算并返回达到楼梯顶部的最低花费。

class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        vector<int> minCost(cost.size()+2,0);

        for (int i = cost.size() - 1; i >= 0; --i) {
            minCost[i] = cost[i] + std::min(minCost[i + 1], minCost[i + 2]);
        }
        return std::min(minCost[0],minCost[1]);
    }
};
// 开始的思路是这种，单独处理的边界情况，但可以直接填0，然后就可以统一处理了。我超，思路真滴棒


int minCostClimbingStairs(vector<int> &cost) {
    vector<int> minCost(cost.size());
    int len = cost.size();
    switch (len) {
        case 0: {
            return 0;
        }
        case 1: {
            return cost[0];
        }
        case 2: {
            return std::min(cost[0], cost[1]);
        }
    }
    minCost[len-1]=cost[len-1];
    minCost[len-2]=cost[len-2];

    for (int i = minCost.size() - 3; i >= 0; --i) {
        minCost[i] = cost[i] + std::min(minCost[i + 1], minCost[i + 2]);
    }
    return minCost[0];
}
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0746_使用最小花费爬楼梯_H
