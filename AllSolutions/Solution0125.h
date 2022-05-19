//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0125_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0125_H

#include "../SolutionCommon.h"

/// 125. 验证回文串 ez

// 给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

// 说明：本题中，我们将空字符串定义为有效的回文串。

class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";

        for (const char &c: s) {
            if (isLetterOrNumber(c)) {
                copy.push_back(c);
            }
        }

        int len = copy.size();
        for (int i = 0; i < len / 2; i++) {
            if (!judgeChar(copy[i], copy[len - 1 - i])) {
                return false;
            }
        }
        return true;
    }

    bool judgeChar(const char a, const char &b) {
        return getValFromA(a) == getValFromA(b);
    }

    int getValFromA(const char &c) {
        if (c >= 'A' && c <= 'Z') {
            return c - 'A';
        }
        if (c >= 'a' && c <= 'z') {
            return c - 'a';
        }
        return c;
    }

    bool isLetterOrNumber(const char &c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};

// 0难度，入门作业题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0125_H
