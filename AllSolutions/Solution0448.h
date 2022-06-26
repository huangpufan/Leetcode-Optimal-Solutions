//
// Created by hpf on 22-6-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0448_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0448_H

#include "../SolutionCommon.h"

// 448. 找到所有数组中消失的数字 ez

// 给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间 [1, n] 内。

// 请你找出所有在 [1, n] 范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int all[100001]{0};
        int n=nums.size();
        for(const auto& num:nums){
            ++all[num];
        }
        vector<int>res;
        for(int i=1;i<=n;++i){
            if(all[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};

// 猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0448_H
