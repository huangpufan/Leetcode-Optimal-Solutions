//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0198_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0198_H

#include "../SolutionCommon.h"

// 198. 打家劫舍 mid

// 你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
//
// 给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。



class Solution {
public:
    int rob(vector<int> &nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> mostMoney(nums.size());

        mostMoney[0] = nums[0];
        mostMoney[1] = max(nums[0],nums[1]);
        for (int i = 2; i < nums.size(); ++i) {
            int tmp = mostMoney[i - 2] + nums[i];

            mostMoney[i] = (tmp < mostMoney[i - 1]) ? mostMoney[i - 1] : tmp;
        }
        return mostMoney.back();
    }
};


// 一道简单的 dp，凡是一维数组我都觉得简单捏。还是猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0198_H
