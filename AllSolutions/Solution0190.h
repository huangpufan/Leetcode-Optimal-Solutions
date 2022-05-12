//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0190_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0190_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0190_H

#include "../SolutionCommon.h"

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0;i<32;i++){
            res<<=1;
            res+=(n&1);
            n>>=1;
        }
        return res;
    }
};


// 这题依旧有点疑问，就是 %2 还是 &1 效率更高，这个题起码是没测出来
// 网上查了下是位运算，那么以后模2用与1代替  &1！