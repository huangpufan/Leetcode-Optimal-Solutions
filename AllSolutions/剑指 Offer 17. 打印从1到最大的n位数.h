//
// Created by hpf on 22-7-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_17_打印从1到最大的N位数_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_17_打印从1到最大的N位数_H

#include "../SolutionCommon.h"
// 剑指 Offer 17. 打印从1到最大的n位数 ez

// 输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。

// 示例 1:

// 输入: n = 1
// 输出: [1,2,3,4,5,6,7,8,9]

class Solution {
public:
    vector<int> printNumbers(int n) {
        long long max=0;
        for(int i=0;i<n;++i){
            max*=10;
            max+=9;
        }
        vector<int>res(max);
        for(long long i=1;i<=max;++i){
            res[i-1]=i;
        }
        return res;
    }
};

// 这题唯一的坑应该在于 n 非常大。需要用大数的时候，但我暂时不考虑了

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_17_打印从1到最大的N位数_H
