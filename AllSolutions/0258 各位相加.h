//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0258_各位相加_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0258_各位相加_H

#include "../SolutionCommon.h"

// 258. 各位相加 ez

// 给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。返回这个结果。


class Solution {
public:
    int addDigits(int num) {


        while (num >= 10) {
            int tmp = 0;
            while (num > 0) {
                tmp += num % 10;
                num /= 10;
            }
            num = tmp;
        }
        return num;
    }
};

// 数学方法不通用，不写了

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0258_各位相加_H
