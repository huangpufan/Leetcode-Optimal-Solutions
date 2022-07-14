//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_53_I_在排序数组中查找数字_I_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_53_I_在排序数组中查找数字_I_H

#include "../SolutionCommon.h"
//    剑指 Offer 53 - I. 在排序数组中查找数字 I

//    统计一个数字在排序数组中出现的次数。

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // 寻找第一个小于 target 以及第一个大于 target 的数字。
        if(nums.empty()){
            return 0;
        }
        if(nums.size()==1){

        }
        int le=0,ri=nums.size()-1;
        int le_loc=0,ri_loc=0;
        int find=binarySearch(nums,target);
        if(nums[find]!=target){
            return 0;
        }
        le_loc=binarySearch(nums,double(target)-0.5);
        ri_loc= binarySearch(nums,double(target)+0.5);

        return ri_loc-1-le_loc;
    }
    int binarySearch(vector<int>& nums, double target) {
        int le=0,ri=nums.size();
        while(le<ri){
            int mid=le+((ri-le)>>1);
            if(nums[mid]>target){
                ri=mid;
            }else if(nums[mid]<target){
                le=mid+1;
            }else{
                return mid;
            }
        }
        return le;
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_53_I_在排序数组中查找数字_I_H

