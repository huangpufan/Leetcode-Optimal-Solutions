//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0014_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0014_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0014_H

#include "../SolutionCommon.h"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs[0].length();i++){
            auto thisChar=strs[0][i];
            for(const string& str:strs){
                if(thisChar!=str[i]){
                    return res;
                }
            }
            res.push_back(thisChar);
        }
        return res;
    }
};