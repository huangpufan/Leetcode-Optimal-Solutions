//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0242_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0242_H
#include "../SolutionCommon.h"

// 242. 有效的字母异位词 ez

// 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

// 注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>map;
        for(auto& c:s){
            if(map.count(c)!=0){
                ++map[c];
            }else{
                map[c]=1;
            }
        }
        for(auto & c:t){
            if(map.count(c)!=0){
                --map[c];
            }else{
                return false;
            }
        }
        for(auto& kv:map){
            if(kv.second!=0){
                return false;
            }
        }
        return true;
    }
};

// ezez

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0242_H
