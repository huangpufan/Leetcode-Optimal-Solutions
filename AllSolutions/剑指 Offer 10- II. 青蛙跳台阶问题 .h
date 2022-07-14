//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_II_青蛙跳台阶问题_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_II_青蛙跳台阶问题_H

#include "../SolutionCommon.h"

//    剑指 Offer 10- II. 青蛙跳台阶问题 ez

//    一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。

//    答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

class Solution {
public:
    int numWays(int n) {
        if(n==0){
            return 1;
        }
        const int mod=1000000007;
        vector<int>steps(n+2);
        steps[1]=1;
        steps[2]=2;
        for(int i=3;i<=n;++i){
            steps[i]=steps[i-1]+steps[i-2];
            steps[i]%=mod;
        }
        return steps[n];
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_10_II_青蛙跳台阶问题_H
