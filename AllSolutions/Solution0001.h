//
// Created by hpf on 22-5-10.
//

#include "../SolutionCommon.h"

/*
 * 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target 的那两个整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

 */
class Solution0001 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {

        // 什么，这不是只需要一次哈希么，我敲，我双指针的思路是从哪来的
        unordered_map<int, int> numLocHash;
        for (size_t i = 0; i < nums.size(); i++) {
            // 我敲，本来写了一堆，结果发现根本不用先存到哈希里，直接先判断表里有没有就能排除自查询
            auto it=numLocHash.find(target - nums[i]);
            if (it != numLocHash.end()) {
                return {0,it->second};
            } else {
                numLocHash[nums[i]]=i;
            }

        }
        return {0,0};
    }
};
/*
 * 经典两数之和，任何人上力扣见到的第一题。
 *
 * 方法也是经典双指针。用个无序哈希存就是了
 * 好吧，我错了，如果原本是有序的就用双指针，不然还要排序，nlogn 效率不如直接建个无序哈希。
 *
 * 但是可恶，unordered multimap 没用过，写起来有点怪怪的。答案的写法非常精妙，都不需要 multimap，直接怒抄题解。
 * 要注意 multimap 在同一个 key 有多个 value 时，需要掌握写法，first/second 这么两个东西其实有点有迷惑性，出现两次。
 *
 */