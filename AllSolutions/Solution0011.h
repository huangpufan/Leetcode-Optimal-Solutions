//
// Created by hpf on 22-5-17.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0011_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0011_H

#include "../SolutionCommon.h"

/// 11. 盛最多水的容器 mid

// 给定一个长度为 n 的整数数组 height 。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和(i, height[i])。

// 找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

// 返回容器可以储存的最大水量。

// 说明：你不能倾斜容器。
class Solution {
public:
    int maxArea(vector<int> &height) {
        int le = 0, ri = height.size() - 1;
        int max = (ri - le) * ((height[le] < height[ri]) ? height[le] : height[ri]);

        while (le < ri) {
            if (height[le] < height[ri]) {
                ++le;
            } else {
                --ri;
            }
            auto shorter = (height[le] < height[ri]) ? height[le] : height[ri];
            auto nowVolume = shorter * (ri - le);
            max = (max < nowVolume) ? nowVolume : max;
        }
        return max;
    }
};

// 我参透了双指针。双指针就是在遍历所有情况，而不是特殊情况


#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0011_H
