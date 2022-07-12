//
// Created by hpf on 22-5-24.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0326_3_的幂_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0326_3_的幂_H
#include "../SolutionCommon.h"

// 326. 3 的幂 ez

// 给定一个整数，写一个函数来判断它是否是 3 的幂次方。如果是，返回 true ；否则，返回 false 。

// 整数 n 是 3 的幂次方需满足：存在整数 x 使得 n == 3x

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1){
            return false;
        }
        int mod=0;
        while(n>1){
            if(n%3!=0){
                return false;
            }
            n/=3;
        }
        return n==1;
    }
};

// 猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0326_3_的幂_H
