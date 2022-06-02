//
// Created by hpf on 22-6-2.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0557_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0557_H

#include "../SolutionCommon.h"

// 557. 反转字符串中的单词 III ez

// 给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

class Solution {
public:
    void Reverse(string &s, int le, int ri) {
        int tmp = 0;
        int len=ri+1-le;
        for (int i = 0; i < len / 2; ++i) {
            tmp=s[i + le];
            s[i + le]=s[ri - i];
            s[ri - i]=tmp;
        }
    }
    string reverseWords(string s) {
        int le=0,cur=0;
        while(cur<s.size()){
            if(s[cur]==' '){
                Reverse(s,le,cur-1);
                le=cur+1;
            }
            ++cur;
        }
        Reverse(s,le,cur-1);
        return s;

    }
};

// 猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0557_H
