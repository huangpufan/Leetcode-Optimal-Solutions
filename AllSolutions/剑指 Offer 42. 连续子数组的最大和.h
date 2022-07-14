//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_42_连续子数组的最大和_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_42_连续子数组的最大和_H

#include "../SolutionCommon.h"


//    剑指 Offer 42. 连续子数组的最大和 ez

//    输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。
//    要求时间复杂度为O(n)。

//    示例1:

//    输入: nums = [-2,1,-3,4,-1,2,1,-5,4]
//    输出: 6
//    解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。

//    提示：
//    1 <= arr.length <= 10^5
//    -100 <= arr[i] <= 100

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT32_MIN;
        int sum=0;
        for(int i=0;i<nums.size();++i){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};

// 猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_42_连续子数组的最大和_H
