//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0383_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0383_H

#include "../SolutionCommon.h"

// 383. 赎金信 ez

// 给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。

// 如果可以，返回 true ；否则返回 false 。

// magazine 中的每个字符只能在 ransomNote 中使用一次。


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0;
        unordered_map<char, int> map;
        for (const auto &c: magazine) {
            int count = 0;
            map[c]+=1;
        }
        for (const auto &c: ransomNote) {
            if (map[c] == 0) {
                return false;
            } else {
                cout << map.count(c) << endl;
                map[c] -= 1;
            }
        }
        return true;
    }
};

// 我以为是一一对应，原来是 magazine >= ransomNote

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0383_H
