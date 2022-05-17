//
// Created by hpf on 22-5-17.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0007_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0007_H

#include "../SolutionCommon.h"

/// 7. 整数反转 ez

// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

// 如果反转后整数超过 32 位的有符号整数的范围 [−231, 231 − 1] ，就返回 0。

// 假设环境不允许存储 64 位整数（有符号或无符号）。

class Solution {
public:
    int reverse(int x) {
        bool isMinus = (x < 0);
        int absX = abs(x);

        int absRes = 0;
        while (absX > 0) {
            int bit=absX % 10;
            absX/=10;
            int tmp=0;
            if(absRes<=(INT32_MAX-bit)/10){
                absRes=absRes*10+bit;
            }else{
                return 0;
            }
        }
        if(isMinus){
            absRes=-absRes;
        }
        return absRes;

    }
};

// 乘法转除法就好了 我参透了溢出的处理方式。加变减乘变除
// 题解的思路是猪b吧

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0007_H
