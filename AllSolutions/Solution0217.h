//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0217_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0217_H
#include "../SolutionCommon.h"


/// 217. 存在重复元素 ez

// 给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>set ;
        for(const int& num:nums){
            if(set.find(num)!=set.end()){
                return true;
            }else{
                set.insert(num);
            }
        }
        return false;
    }
};

// 幼儿园题目

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0217_H
