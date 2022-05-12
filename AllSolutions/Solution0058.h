//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0058_H
#include "../SolutionCommon.h"


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