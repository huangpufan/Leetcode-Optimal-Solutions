//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0283_移动零_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0283_移动零_H
#include "../SolutionCommon.h"

// 283. 移动零 ez
// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
// 请注意 ，必须在不复制数组的情况下原地对数组进行操作。


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int le=0,ri=0;
        while(ri<nums.size()){
            while(nums[ri]==0&&(ri+1<nums.size())){
                ++ri;
            }
            nums[le++]=nums[ri++];
        }
        while(le<nums.size()){
            nums[le++]=0;
        }
    }
};

// 一眼双指针

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0283_移动零_H
