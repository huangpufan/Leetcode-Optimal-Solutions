//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_21_调整数组顺序使奇数位于偶数前面_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_21_调整数组顺序使奇数位于偶数前面_H

#include "../SolutionCommon.h"
//    剑指 Offer 21. 调整数组顺序使奇数位于偶数前面 ez

//    输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数在数组的前半部分，所有偶数在数组的后半部分。

class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int le=0,ri=nums.size()-1;
        while(le<ri){
            while(nums[le]%2==1&&le<ri){
                ++le;
            }
            while(nums[ri]%2==0&&le<ri){
                --ri;
            }
            swap(nums[le++],nums[ri--]);
        }
        return nums;
    }
};

// 记得判断一手！
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_21_调整数组顺序使奇数位于偶数前面_H
