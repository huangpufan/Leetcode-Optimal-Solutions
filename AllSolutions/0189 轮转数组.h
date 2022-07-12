//
// Created by hpf on 22-6-2.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0189_轮转数组_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0189_轮转数组_H

#include "../SolutionCommon.h"

// 189. 轮转数组 mid

// 给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

class Solution {
public:


    void rotate(vector<int> &nums, int k) {

    }
};

// 这个题是远远算不上 mid 的。
// 但是题目说至少有三个方法，然后起码都想一遍把，肯定是有原地算法的。我看了还有个方法，应该差不多，但是要数学推导，算了

// 法1：先复制最后面的 k 个元素
void rotate(vector<int> &nums, int k) {
    int len = nums.size();
    k %= len;
    vector<int> kNum(k);
    for (int i = 0; i < k; ++i) {
        kNum[i] = nums[len - k + i];
    }
    for (int i = len - 1; i >= k; --i) {
        nums[i] = nums[i - k];
    }
    for (int i = 0; i < k; ++i) {
        nums[i] = kNum[i];
    }
}

// 法2：数组旋转 也是个很自然的想法，但是没见过是想不到的
// 包含左边也包含右边
void Reverse(vector<int> &nums, int le,int ri) {
    int tmp = 0;
    int len=ri+1-le;
    for (int i = 0; i < len / 2; ++i) {
        tmp=nums[i+le];
        nums[i+le]=nums[ri-i];
        nums[ri-i]=tmp;
    }
}

void rotate2(vector<int> &nums, int k) {
    k%=nums.size();
    Reverse(nums,0,nums.size()-k-1);
    Reverse(nums,nums.size()-k,nums.size()-1);
    Reverse(nums,0,nums.size()-1);
}

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0189_轮转数组_H
