//
// Created by hpf on 22-6-9.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1005_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1005_H

#include "../SolutionCommon.h"
// 1005. K 次取反后最大化的数组和 ez

// 给你一个整数数组 nums 和一个整数 k ，按以下方法修改该数组：

// 选择某个下标 i 并将 nums[i] 替换为 -nums[i] 。

// 重复这个过程恰好 k 次。可以多次选择同一个下标 i 。

// 以这种方式修改数组后，返回数组 可能的最大和 。


class Solution {
public:
    int largestSumAfterKNegations(vector<int> &nums, int k) {
        int minusCount = 0;
        priority_queue<int, vector<int>, greater<int>> smallHeadHeap;
        int minusSum = 0;
        int min = INT32_MAX;
        int sum = 0;
        for (const auto &num: nums) {
            sum += num;
            if (num < 0) {
                smallHeadHeap.push(num);
                ++minusCount;
                minusSum += num;
            }
            if(abs(num)<min){
                min=abs(num);
            }
        }
        if (k >= minusCount) {
            sum -= (2 * minusSum);
            if ((k-minusCount) % 2 == 1) {
                sum-=(2*min);
            }
        } else {
            for (int i = 0; i < k; ++i) {
                sum-= 2*smallHeadHeap.top();
                smallHeadHeap.pop();
            }
        }
        return sum;
    }
};

// 需要做优化，对于可以全部直接算的情况，不要再做遍历

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1005_H
