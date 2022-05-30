//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_H

// 1646. 获取生成数组中的最大值

// 给你一个整数 n 。按下述规则生成一个长度为 n + 1 的数组 nums ：
//
// nums[0] = 0
// nums[1] = 1
// 当 2 <= 2 * i <= n 时，nums[2 * i] = nums[i]
// 当 2 <= 2 * i + 1 <= n 时，nums[2 * i + 1] = nums[i] + nums[i + 1]
// 返回生成数组 nums 中的 最大 值。

class Solution {
public:
    int getMaximumGenerated(int n) {

    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1646_H
