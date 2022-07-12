//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0392_判断子序列_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0392_判断子序列_H

#include "../SolutionCommon.h"


// 392. 判断子序列 ez

// 给定字符串 s 和 t ，判断 s 是否为 t 的子序列。

// 字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。

// 进阶：

// 如果有大量输入的 S，称作 S1, S2, ... , Sk 其中 k >= 10亿，你需要依次检查它们是否为 T 的子序列。在这种情况下，你会怎样改变代码？

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size()&&j<t.size()) {
            if(s[i]==t[j]){
                ++i;
            }
            ++j;
        }
        return i==s.size();
    }
};

// 猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0392_判断子序列_H
