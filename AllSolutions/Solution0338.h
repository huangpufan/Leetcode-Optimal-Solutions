//
// Created by hpf on 22-5-24.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0338_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0338_H

#include "../SolutionCommon.h"

// 338. 比特位计数 ez

// 给你一个整数 n ，对于 0 <= i <= n 中的每个 i ，计算其二进制表示中 1 的个数 ，返回一个长度为 n + 1 的数组 ans 作为答案。

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res = {0};
        for (int i = 1; i <= n; i++) {

            if (i % 2 == 1) {
                // 奇数
                res.push_back(res[i - 1] + 1);

            } else {
                // 偶数
                res.push_back(res[i / 2]);
            }
        }
        return res;
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0338_H
