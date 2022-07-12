//
// Created by hpf on 22-6-4.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0414_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0414_H

#include "../SolutionCommon.h"

// 414. 第三大的数 ez

// 给你一个非空数组，返回此数组中 第三大的数 。如果不存在，则返回数组中最大的数。

class Solution {
public:
    int thirdMax(vector<int> &nums) {
        set<int>set;
        for (const auto &num: nums) {
            if(set.find(num)==set.end()){
                set.insert(num);
                if(set.size()>3){
                    set.erase(set.begin());
                }
            }
        }
        if(set.size()<3){
            return *set.rbegin();
        }else{
            return *set.begin();
        }
    }
};

// 这道题不错的，开始我用的大根堆，效率有点低。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0414_H
