//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0263_丑数_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0263_丑数_H
#include "../SolutionCommon.h"


// 263. 丑数 ez

// 丑数 就是只包含质因数 2、3 和 5 的正整数。

// 给你一个整数 n ，请你判断 n 是否为 丑数 。如果是，返回 true ；否则，返回 false 。


class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        int factor[]={2,3,5};
        for(auto i:factor){
            while(n%i==0){
                n/=i;
            }
        }
        return n==1;
    }
};

// 猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_0263_丑数_H
