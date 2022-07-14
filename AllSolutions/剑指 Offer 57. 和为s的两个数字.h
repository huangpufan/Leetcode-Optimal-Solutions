//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_57_和为S的两个数字_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_57_和为S的两个数字_H

#include "../SolutionCommon.h"
//    剑指 Offer 57. 和为s的两个数字 ez

//    输入一个递增排序的数组和一个数字s，在数组中查找两个数，使得它们的和正好是s。如果有多对数字的和等于s，则输出任意一对即可。
//    示例 1：
//
//    输入：nums = [2,7,11,15], target = 9
//    输出：[2,7] 或者 [7,2]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 真正的两数之和！
        int le=0,ri=nums.size()-1;
        while(le<ri){
            if(nums[le]+nums[ri]<target){
                ++le;
            }else if(nums[le]+nums[ri]>target){
                --ri;
            }else{
                return{nums[le],nums[ri]};
            }
        }
        return {};
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_57_和为S的两个数字_H
