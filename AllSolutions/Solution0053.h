//
// Created by hpf on 22-5-15.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0053_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0053_H
#include "../SolutionCommon.h"


// 53. 最大子数组和 ez
//
// 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//
// 子数组 是数组中的一个连续部分。


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int max=INT16_MIN,sum=0;
        // 每次都要把下一个吃掉！然后全都比一次就行了
        for(const auto& i:nums){
            if(sum>0){
                sum+=i;
            }else{
                sum=i;
            }
            max=(max<sum)?sum:max;
        }
        return max;
    }
};

// 这题第一反应就是利用滑动窗口，显然双指针遍历一遍一定能得到最优解，但是有更牛逼的思路。


#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0053_H
