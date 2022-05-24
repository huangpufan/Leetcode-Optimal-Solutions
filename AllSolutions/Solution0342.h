//
// Created by hpf on 22-5-24.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0342_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0342_H

#include "../SolutionCommon.h"



// 342. 4的幂 ez

// 给定一个整数，写一个函数来判断它是否是 4 的幂次方。如果是，返回 true ；否则，返回 false 。

// 整数 n 是 4 的幂次方需满足：存在整数 x 使得 n == 4x

class Solution {
public:
    bool isPowerOfFour(int n) {
        // 看评论的做法有很吊的做法的，是利用位运算，还有2的幂。

    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0342_H
// 数学性质并没有用的很好.

bool isPowerOfFour(int n) {
    if (n != 1 && (n & 1) == 1 || n < 1) {
        return false;
    }
    int mod = 0;
    while (n > 1) {
        mod = n % 4;
        if (mod != 0) {
            return false;
        }
        n /= 4;
    }
    return n == 1;
}