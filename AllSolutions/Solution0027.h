//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0027_H

#include "../SolutionCommon.h"

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