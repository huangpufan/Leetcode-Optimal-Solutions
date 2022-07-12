//
// Created by hpf on 22-5-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0509_斐波那契数_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0509_斐波那契数_H
#include "../SolutionCommon.h"
// 509. 斐波那契数 ez

// 斐波那契数 （通常用 F(n) 表示）形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
//
// F(0) = 0，F(1) = 1
// F(n) = F(n - 1) + F(n - 2)，其中 n > 1
// 给定 n ，请计算 F(n) 。


class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        vector<int>all(n+1);
        all[0]=0;
        all[1]=1;
        for(int i=2;i<=n;++i){
            all[i]=all[i-1]+all[i-2];
        }
        return all[n];
    }
};

// 猪猪题 得注意最前面的边界条件。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0509_斐波那契数_H
