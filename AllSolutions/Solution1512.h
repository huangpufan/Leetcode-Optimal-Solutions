//
// Created by hpf on 22-6-10.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1512_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1512_H

#include "../SolutionCommon.h"
//1512. 好数对的数目 ez

//给你一个整数数组 nums 。
//
//如果一组数字 (i,j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。
//
//返回好数对的数目。

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>equalNumCount;
        for(const auto& num:nums){
            if(equalNumCount.count(num)==0){
                equalNumCount[num]=1;
            }else{
                ++equalNumCount[num];
            }
        }
        int res=0;
        for(const auto singleEqualNum:equalNumCount){
            res+=(singleEqualNum.second*(singleEqualNum.second-1)/2);
        }
        return res;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1512_H
