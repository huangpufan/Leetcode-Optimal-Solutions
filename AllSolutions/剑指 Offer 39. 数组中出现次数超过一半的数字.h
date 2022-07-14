//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_39_数组中出现次数超过一半的数字_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_39_数组中出现次数超过一半的数字_H

#include "../SolutionCommon.h"

// 剑指 Offer 39. 数组中出现次数超过一半的数字  ez

// 数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//
// 你可以假设数组是非空的，并且给定的数组总是存在多数元素。

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int count=1;
        for(int i=1;i<nums.size();++i){
            if(count==0){
                res=nums[i];
                count=1;
            }else{
                if(res==nums[i]){
                    ++count;
                }else{
                    --count;
                }
            }
        }
        return res;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_39_数组中出现次数超过一半的数字_H
