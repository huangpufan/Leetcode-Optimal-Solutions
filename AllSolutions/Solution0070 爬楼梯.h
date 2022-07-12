//
// Created by hpf on 22-5-16.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0070_爬楼梯_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0070_爬楼梯_H

#include "../SolutionCommon.h"


// 70. 爬楼梯 ez
//
// 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
// 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？


class Solution {
public:
    int climbStairs(int n) {
        vector<int>count{0,1,2};
        for(int i=3;i<=n;i++){
            count.push_back(count[i-1]+count[i-2]);
        }
        return count[n];
    }
};


// 递归做法，效率贼低
int climbStairs(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else if (n < 1) {
        return 0;
    } else {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }

}
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0070_爬楼梯_H
