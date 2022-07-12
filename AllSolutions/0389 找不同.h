//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0389_找不同_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0389_找不同_H
#include "../SolutionCommon.h"


// 389. 找不同 ez

// 给定两个字符串 s 和 t ，它们只包含小写字母。

// 字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。

// 请找出在 t 中被添加的字母。

class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0;
        for(auto &c:s){
            i^=c;
        }
        for(auto&c:t){
            i^=c;
        }
        return i;
    }
};

// 猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0389_找不同_H
