//
// Created by hpf on 22-5-15.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0704_二分查找_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0704_二分查找_H

#include "../SolutionCommon.h"


// 704. 二分查找
//
// 给定一个n  个元素有序的（升序）整型数组 nums 和一个目标值 target ，写一个函数搜索 nums 中的 target

// 如果目标值存在返回下标，否则返回 -1。


class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.empty() || nums[0] > target || nums[nums.size() - 1] < target) {
            return -1;
        }
        int le = 0, ri = nums.size() - 1;
        while (le < ri) {
            int mid = le + (ri - le) / 2;
            if (nums[mid] > target) {
                ri = mid;
            } else if (nums[mid] < target) {
                le = mid + 1;
            } else {
                return mid;
            }
        }
        if (nums[le] == target) {
            return le;
        }else{
            return -1;
        }
    }
};

// 最简单的二分查找，没有任何花里胡哨
// 得注意的是真正需要辨析的，是 while 判断条件与 le ri 的移动方式。如果没有数据库

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0704_二分查找_H
