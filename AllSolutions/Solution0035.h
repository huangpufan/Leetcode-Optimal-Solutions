//
// Created by hpf on 22-5-15.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0035_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0035_H
#include "../SolutionCommon.h"

/// 35. 搜索插入位置 ez

// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

// 请必须使用时间复杂度为 O(log n) 的算法。

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()){
            return 0;
        }
        int le=0,ri=nums.size()-1;
        while(le<ri){
            int mid=le+(ri-le)/2;
            if(nums[mid]>target){
                ri=mid;
            }else if(nums[mid]<target){
                le=mid+1;
            }else{
                return mid;
            }
        }

        // 为了可读性，特意分开情况
        if(nums[le]==target){
            return le;
        }else if (nums[le]<target){
            return le+1;
        }else{
            return le;
        }
    }
};

// 就是简单的二分查找捏
// 不同之处在于除了普通的查找索引之外要考虑插入位置的种类。大概分为以下几种
// le insert ri
// insert le ri
// le ri insert
// 规约到最终情况大概是也没有特别多种情况：
// le insert
// insert le  也就是两种，而可以看出他们会包含第一种情况，但都没关系，反正这是规约的结果，不是左边就是右边！



#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0035_H
