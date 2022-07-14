//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_58_II_左旋转字符串_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_58_II_左旋转字符串_H

#include "../SolutionCommon.h"
//    剑指 Offer 58 - II. 左旋转字符串 ez

//    字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。请定义一个函数实现字符串左旋转操作的功能。
//    比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        rotate(&s[0],n);
        rotate(&s[n],s.size()-n);
        rotate(&s[0],s.size());
        return s;
    }
    void rotate(char* c,int len){
        for(int i=0;i<len/2;i++){
            swap(c[i],c[len-1-i]);
        }
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_58_II_左旋转字符串_H
