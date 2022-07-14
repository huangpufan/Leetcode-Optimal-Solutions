//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_50_第一个只出现一次的字符_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_50_第一个只出现一次的字符_H

#include "../SolutionCommon.h"

//    剑指 Offer 50. 第一个只出现一次的字符  ez

//    在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。
//
//    示例 1:
//
//    输入：s = "abaccdeff"
//    输出：'b'

//    示例 2:

//    输入：s = ""
//    输出：' '

//    限制：
//    0 <= s 的长度 <= 50000
class Solution {
public:
    char firstUniqChar(string s) {
        map<char, int> count_map;
        for (const auto &c: s) {
            const auto &it = count_map.find(c);
            if(it==count_map.end()){
                count_map[c]=1;
            }else{
                ++count_map[c];
            }
        }
        for (const auto &c: s) {
            const auto &it = count_map.find(c);
            if(it->second==1){
                return it->first;
            }
        }
        return  ' ';
    }
};

// 猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_50_第一个只出现一次的字符_H
