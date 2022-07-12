//
// Created by hpf on 22-5-24.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0344_反转字符串_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0344_反转字符串_H
#include "../SolutionCommon.h"


// 344. 反转字符串 ez

// 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。

// 不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。


class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++){
            char tmp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=tmp;
        }
    }
};

// 铁猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_0344_反转字符串_H
