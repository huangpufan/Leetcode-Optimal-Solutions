//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0231_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0231_H
#include "../SolutionCommon.h"


// 231. 2 的幂 ez

// 给你一个整数 n，请你判断该整数是否是 2 的幂次方。如果是，返回 true ；否则，返回 false 。

// 如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。


class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        while(n>0){
            count+=(n&1);
            n>>=1;
        }
        return count==1;
    }
};

// 这题太猪了。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0231_H
