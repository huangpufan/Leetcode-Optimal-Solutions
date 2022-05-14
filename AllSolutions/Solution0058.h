//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H
#include "../SolutionCommon.h"


/* 58. 最后一个单词的长度
 *
 * 给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。

    单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool meetChar= false;
        int right=s.length()-1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(meetChar== false){
                    continue;
                }
                return right-i;
            }else{
                meetChar= true;
                right=i;
            }

        }
        return s.length();
    }
};

// 也没啥好说的啦