//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0169_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0169_H
#include "../SolutionCommon.h"

///169. 多数元素 ez

//给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

//你可以假设数组是非空的，并且给定的数组总是存在多数元素。

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int val=0;
        for(const auto& i:nums){
            if(i==val){
                ++count;
            }else{
                if(count==0){
                    ++count;
                    val=i;
                }else{
                    --count;
                }
            }
        }
        return val;
    }
};

// 最呆的方法就是 map 计数。有无好方法，我想想。想起一个计算机科学导论的解法，就是投票，因为大于一半，所以顶掉所有人还能剩下


#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0169_H
