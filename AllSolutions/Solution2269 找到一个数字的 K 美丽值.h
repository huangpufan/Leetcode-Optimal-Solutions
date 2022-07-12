//
// Created by hpf on 22-6-10.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION2269_找到一个数字的_K_美丽值_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION2269_找到一个数字的_K_美丽值_H

#include "../SolutionCommon.h"
//2269. 找到一个数字的 K 美丽值 ez
//
//一个整数 num 的 k 美丽值定义为 num 中符合以下条件的 子字符串 数目：
//
//子字符串长度为 k 。
//子字符串能整除 num 。
//给你整数 num 和 k ，请你返回 num 的 k 美丽值。
//
//注意：
//
//允许有 前缀 0 。
//0 不能整除任何值。
//一个 子字符串 是一个字符串里的连续一段字符序列。

class Solution {
public:
    int divisorSubstrings(int num, const int k) {
        string numStr = to_string(num);
        if (k > numStr.size()) {
            return 0;
        }
        int len = numStr.size();
        int count = 0;

        string zeroK(k,'0');
        for (int i = 0; i < len - k + 1; ++i) {
            string subStr = numStr.substr(i, k);
            if(subStr==zeroK){
                continue;
            }
            int subInt = stoi(subStr);
            if (num % subInt == 0) {
                ++count;
            }

        }
        return count;
    }
};
// 转 string 截取之后转 int,居然不让重复
// C++ 的字符串函数是不同的，我感觉这个更好
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION2269_找到一个数字的_K_美丽值_H
