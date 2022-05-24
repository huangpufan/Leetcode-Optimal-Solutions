//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0387_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0387_H
#include "../SolutionCommon.h"


// 387. 字符串中的第一个唯一字符 ez

// 给定一个字符串 s ，找到 它的第一个不重复的字符，并返回它的索引 。如果不存在，则返回 -1 。

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>map;
        for(int i=0;i<s.size();i++){
            if(map.count(s[i])==0){
                map[s[i]]=1;
            }else{
                ++map[s[i]];
            }
        }
        for(int i=0;i<s.size();i++){
            if(map[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};

// 搞个 _table ，遍历就行了
// 优化的空间在于用数组代替 _table 但我感觉没必要

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0387_H
