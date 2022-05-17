//
// Created by hpf on 22-5-17.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0020_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0020_H

#include "../SolutionCommon.h"

/// 20. 有效的括号 ez

// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

// 有效字符串需满足：

// 左括号必须用相同类型的右括号闭合。

// 左括号必须以正确的顺序闭合。

class Solution {
public:
    bool rightBraceHandle(stack<char> &brace, const char &c) {
        char left = '0';
        switch (c) {
            case ')': {
                left = '(';
                break;
            }
            case '}': {
                left = '{';
                break;
            }
            case ']': {
                left = '[';
                break;
            }
        }
        if (brace.empty()) {
            return false;
        }
        auto top = brace.top();
        if (top != left) {
            return false;
        } else {
            brace.pop();
            return true;
        }
    }

    bool isValid(string s) {
        if (s.length() & 1 == 1) {
            return false;
        }
        stack<char> brace;
        for (const auto &c: s) {
            switch (c) {
                case ')':
                case '}':
                case ']': {
                    if (rightBraceHandle(brace, c) == false)
                        return false;
                    break;
                }
                default: {
                    brace.push(c);
                    break;
                }
            }
        }
        return brace.empty();

    }
};
// 搞了一个好看的主体结构

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0020_H
