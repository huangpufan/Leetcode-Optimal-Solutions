//
// Created by hpf on 22-6-2.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0278_第一个错误的版本_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0278_第一个错误的版本_H

#include "../SolutionCommon.h"

// 278. 第一个错误的版本 ez

// 你是产品经理，目前正在带领一个团队开发新的产品。不幸的是，你的产品的最新版本没有通过质量检测。由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。

// 假设你有 n 个版本 [1, 2, ..., n]，你想找出导致之后所有版本出错的第一个错误的版本。

// 你可以通过调用 bool isBadVersion(version) 接口来判断版本号 version 是否在单元测试中出错。实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数。


class Solution {
public:
    bool isBadVersion(int version) { return true; }

    int firstBadVersion(int n) {
        int le = 0, ri = n - 1;
        int mid = 0;
        while (le < ri) {
            mid = le + (ri - le) / 2;
            if (isBadVersion(mid)== true){
                ri=mid;
            }else{
                le=mid+1;
            }
        }
       // le==ri
       return le;

    }
};


// 本题的二分，需要取的最终状态是：
// A i-1 为 false i 为 true
// B i==0 && i 为 true
// 总之是找第一个 true

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0278_第一个错误的版本_H
