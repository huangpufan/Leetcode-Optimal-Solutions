//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0219_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0219_H

#include "../SolutionCommon.h"


// 219. 存在重复元素 II ez

// 给你一个整数数组 nums 和一个整数 k ，判断数组中是否存在两个 不同的索引 i 和 j ，

// 满足 nums[i] == nums[j] 且 abs(i - j) <= k 。如果存在，返回 true ；否则，返回 false 。

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.count(nums[i]) != 0 && std::abs(map[nums[i]] - i) <= k) {
                return true;
            }
            map[nums[i]] = i;

        }
        return false;
    }
};

// map 存一下得了，要注意的一点是因为反正是往后更新，所以无脑更新 i。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0219_H
