//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0067_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0067_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0067_H

#include "../SolutionCommon.h"

/// 67. 二进制求和 ez
//
//  给你两个二进制字符串，返回它们的和（用二进制表示）。
//
//  输入为 非空 字符串且只包含数字 1 和 0。

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int thisBit = 0;
        int aSub = 0, bSub = 0;
        const int maxASub = a.length() - 1, maxBSub = b.length() - 1;
        string res = "";
        // 三木运算符，永远的神！这里狠狠地懂了什么是简洁的美
        while (aSub <= maxASub || bSub <= maxBSub || carry == 1) {
            thisBit =
                    ((aSub <= maxASub) ? CharToInt(a[maxASub - aSub]) : 0) +
                    ((bSub <= maxBSub) ? CharToInt(b[maxBSub - bSub]) : 0) +
                    carry;

            carry = ((thisBit > 1) ? 1 : 0);
            thisBit = ((thisBit % 2 == 0) ? 0 : 1);

            ++aSub;
            ++bSub;
            res.push_back(IntToChar(thisBit));
        }
        std::reverse(res.begin(), res.end());

        return res;
    }

    int CharToInt(const char &c) {
        return (c == '1' ? 1 : 0);
    }

    int IntToChar(const int &i) {
        return (i == 1 ? '1' : '0');
    }
};

