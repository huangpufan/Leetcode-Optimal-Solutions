//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0055_跳跃游戏_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0055_跳跃游戏_H

#include "../SolutionCommon.h"


// 55. 跳跃游戏 mid

// 给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。

// 数组中的每个元素代表你在该位置可以跳跃的最大长度。

// 判断你是否能够到达最后一个下标。


class Solution {
public:
    bool canJump(vector<int> &nums) {
        if (nums.size() <= 1) {
            return true;
        }
        auto longestRange = nums[0];


        for (int i = 1; i < nums.size() - 1; ++i) {
            if(longestRange>=i){
                longestRange = max(nums[i] + i, longestRange);
            }else{
                return false;
            }
        }
        // -1-1-1-1-1-1-1-1!
        return longestRange>=nums.size()-1;

    }
};

// 说实话，写的并不是很优雅，把 longestRange == 0 的情况还单独列出来了。

bool canJump(vector<int> &nums) {
    if (nums.size() == 1) {
        return true;
    }
    auto longestRange = nums[0];

    if (longestRange == 0) {
        return false;
    }

    for (int i = 1; i < nums.size() - 1; ++i) {
        longestRange = max(nums[i] + i, longestRange);
        if (longestRange < i + 1) {
            return false;
        }
    }
    return true;

}
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0055_跳跃游戏_H
