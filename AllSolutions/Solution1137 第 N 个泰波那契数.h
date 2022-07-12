//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1137_第_N_个泰波那契数_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1137_第_N_个泰波那契数_H
#include "../SolutionCommon.h"

// 1137. 第 N 个泰波那契数 ez

// 泰波那契序列 Tn 定义如下：

// T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn+3 = Tn + Tn+1 + Tn+2

// 给你整数 n，请返回第 n 个泰波那契数 Tn 的值。

class Solution {
public:
    int tribonacci(int n) {
        vector<int>all{0,1,1};

        for(int i=3;i<=n;++i){
            all.push_back(all[i-1]+all[i-2]+all[i-3]);
        }
        return all[n];
    }
};

// 铁猪猪

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1137_第_N_个泰波那契数_H
