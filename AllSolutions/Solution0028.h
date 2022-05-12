//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0028_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0028_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0028_H

#include "../SolutionCommon.h"

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty() || haystack.empty() || haystack.length() < needle.length()) {
            return 0;
        }
        int hayLen = haystack.length();
        int needleLen = needle.length();
        for (int i = 0; i < hayLen; i++) {
            if (hayLen-1-i)
        }

    }
};