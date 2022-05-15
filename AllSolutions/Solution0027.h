//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H

#include "../SolutionCommon.h"

/// 27. 移除元素 ez
//
//  给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//  不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//  元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t le=0,ri=0;

        while(ri<nums.size()){
            if(nums[ri]==val){
                ++ri;
            }else{
                nums[le++]=nums[ri++];
            }
        }
        return le;
    }
};

// ezez