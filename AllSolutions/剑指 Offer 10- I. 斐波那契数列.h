//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_I_斐波那契数列_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_I_斐波那契数列_H

#include "../SolutionCommon.h"
//    剑指 Offer 10- I. 斐波那契数列 ez

//    写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下：

//    F(0) = 0,   F(1) = 1
//    F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
//    斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。

//    答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

class Solution {
public:
    int fib(int n) {
        vector<int>all(n+2);
        all[0]=0;
        all[1]=1;
        const int mod=1000000007;
        for(int i=2;i<=n;++i){
            all[i]=all[i-1]+all[i-2];
            all[i]%=mod;
        }
        return all[n];
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_I_斐波那契数列_H
