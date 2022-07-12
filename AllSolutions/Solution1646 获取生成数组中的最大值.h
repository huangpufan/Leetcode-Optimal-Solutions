//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_获取生成数组中的最大值_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_获取生成数组中的最大值_H

#include "../SolutionCommon.h"

// 1646. 获取生成数组中的最大值 ez

// 给你一个整数 n 。按下述规则生成一个长度为 n + 1 的数组 nums ：

// nums[0] = 0
// nums[1] = 1
// 当 2 <= 2 * i <= n 时，nums[2 * i] = nums[i]
// 当 2 <= 2 * i + 1 <= n 时，nums[2 * i + 1] = nums[i] + nums[i + 1]

// 返回生成数组 nums 中的 最大 值。

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> all{0, 1};
        if (n <= 1) {
            return n;
        }
        int max = 0;
        for (int i = 2; i <= n; ++i) {
            if ((i & 1) == 1) {
                // 奇数
                all.push_back(all[(i - 1) / 2] + all[(i + 1) / 2]);
            } else {
                all.push_back(all[i / 2]);
            }
            if (all.back() > max) {
                max = all.back();
            }
        }
        return max;
    }
};

// 每天一道猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_获取生成数组中的最大值_H
