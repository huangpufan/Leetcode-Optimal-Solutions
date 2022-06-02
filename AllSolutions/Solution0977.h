//
// Created by hpf on 22-6-2.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0977_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0977_H

#include "../SolutionCommon.h"

// 977. 有序数组的平方 ez

// 给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int lastMinus=nums.size()-1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>=0){
                lastMinus=i-1;
                break;
            }
        }
        // 找到了双指针开始的位置
        int le=lastMinus,ri=le+1;
        int len=nums.size();
        vector<int>res(len);

        int resCursor=0;
        while(le>=0||ri<=len-1){
            if(le>=0&&ri<=len-1){
                if(abs(nums[le])<abs(nums[ri])){
                    res[resCursor++]=pow(nums[le--],2);
                }else{
                    res[resCursor++]=pow(nums[ri++],2);
                }
            }else if(le>=0){
                res[resCursor++]=pow(nums[le--],2);
            }else{
                res[resCursor++]=pow(nums[ri++],2);

            }
        }
        return res;
    }
};

// 惭愧，这个题开始没有想到双指针，就是单纯的平方后重排序。
// 双指针的思想真是自然，看来凡是 两个方向+比较 的思路，都可以用这个。
// 而且有个我错了的细节，lastMinus 初始化应该为 len-1 而不是 -1！

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0977_H
