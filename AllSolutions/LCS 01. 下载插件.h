//
// Created by hpf on 22-5-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_LCS_01_下载插件_H
#define LEETCODE_OPTIMAL_SOLUTIONS_LCS_01_下载插件_H
#include "../SolutionCommon.h"

// LCS 01. 下载插件 ez


// 小扣打算给自己的 VS code 安装使用插件，初始状态下带宽每分钟可以完成 1 个插件的下载。假定每分钟选择以下两种策略之一:

// 使用当前带宽下载插件
// 将带宽加倍（下载插件数量随之加倍）

// 请返回小扣完成下载 n 个插件最少需要多少分钟。
//
// 注意：实际的下载的插件数量可以超过 n 个


class Solution {
public:
    int leastMinutes(int n) {
        return ceil(log(n)/log(2))+1;
    }
};

// 这道题就是看2的几次方大于等于n  这道题学到了 log 这个函数

#endif //LEETCODE_OPTIMAL_SOLUTIONS_LCS_01_下载插件_H
