//
// Created by hpf on 22-7-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_03_数组中重复的数字_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_03_数组中重复的数字_H

#include "../SolutionCommon.h"
// 剑指 Offer 03. 数组中重复的数字 ez

// 找出数组中重复的数字。

// 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
// 数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
//
// 限制：
//
// 2 <= n <= 100000

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        vector<int>count(100001);
        for(const auto num:nums){
            if(++count[num]>1){
                return num;
            }
        }
        return -1;
    }
};
// 没什么好说的。
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_03_数组中重复的数字_H
