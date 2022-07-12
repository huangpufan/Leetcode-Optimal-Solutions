//
// Created by hpf on 22-6-8.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_1013_将数组分成和相等的三个部分_H
#define LEETCODE_OPTIMAL_SOLUTIONS_1013_将数组分成和相等的三个部分_H

#include "../SolutionCommon.h"

// 1013. 将数组分成和相等的三个部分 ez

// 给你一个整数数组 arr，只有可以将其划分为三个和相等的 非空 部分时才返回 true，否则返回 false。

// 形式上，如果可以找出索引 i + 1 < j 且满足 (arr[0] + arr[1] + ... + arr[i] == arr[i + 1] + arr[i + 2] + ... + arr[j - 1] == arr[j] + arr[j + 1] + ... + arr[arr.length - 1]) 就可以将数组三等分。
class Solution {
public:
    bool canThreePartsEqualSum(vector<int> &arr) {
        int sum = 0;
        for (const auto &i: arr) {
            sum += i;
        }
        int aThird = sum / 3;
        if (sum != aThird * 3) {
            return false;
        }
        int tmp = 0;
        int count=0;
        for (const auto &i: arr) {
            tmp += i;
            if (tmp >= aThird) {
                if (tmp == aThird) {
                    tmp = 0;
                    ++count;
                    if(count==3){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

// 还有优化空间：找两段就够了

#endif //LEETCODE_OPTIMAL_SOLUTIONS_1013_将数组分成和相等的三个部分_H
