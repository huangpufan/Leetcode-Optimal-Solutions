//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0136_只出现一次的数字_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0136_只出现一次的数字_H
#include "../SolutionCommon.h"


// 136. 只出现一次的数字 ez
//
// 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

// 说明：

// 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(const auto& i: nums){
            res^=i;
        }
        return res;
    }
};

// 异或题目。也是老题了，沈老师好像出过类似的？在位运算的时候

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0136_只出现一次的数字_H
