//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0088_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0088_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0088_H


/// 88. 合并两个有序数组 ez
//
//  给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

//  请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//
//  注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，
//
//  其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。


#include "../SolutionCommon.h"

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int last = m + n - 1;
        while (n > 0 || n > 0) {
            if (m == 0 || nums1[m - 1] < nums2[n - 1]) {
                nums1[last--]=nums2[--n];
            }else{
                nums1[last--]=nums1[--m];
            }
        }
    }
};
/*
 * 本题使用的方法比较有趣，为了防止写多次循环，就这么搞起来，因为只分两种情况
 * 1 写 m
 * 2 写 n 而这俩种情况可以完全依靠条件分开。很舒服。
 */