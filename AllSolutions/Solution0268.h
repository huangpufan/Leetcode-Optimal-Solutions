//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0268_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0268_H

#include "../SolutionCommon.h"

// 268. 丢失的数字 ez
//
// 给定一个包含 [0, n] 中 n 个数的数组 nums ，找出 [0, n] 这个范围内没有出现在数组中的那个数。

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>n(nums.size()+1,0);
        for(auto& num:nums){
            ++n[num];
        }
        for(int i=0;i<n.size();i++){
            if(n[i]==0){
                return i;
            }
        }
        return 0;
    }
};

// 猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0268_H
