//
// Created by hpf on 22-7-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_05_替换空格_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_05_替换空格_H

#include "../SolutionCommon.h"

//    剑指 Offer 05. 替换空格 ez

//    请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

//    示例 1：
//    输入：s = "We are happy."
//    输出："We%20are%20happy."

class Solution {
public:
    string replaceSpace(string s) {
        string res="";
        for(const auto& c:s){
            if(c==' '){
                res+="%20";
            }else{
                res.push_back(c);
            }
        }
        return res;
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_05_替换空格_H
