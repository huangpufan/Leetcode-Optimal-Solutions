//
// Created by hpf on 22-5-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0118_杨辉三角_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0118_杨辉三角_H
#include "../SolutionCommon.h"


// 118. 杨辉三角 ez

// 给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
//
// 在「杨辉三角」中，每个数是它左上方和右上方的数的和。

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>res;
        for(int i=0;i<numRows;++i){
            vector<int>oneLine(i+1);
            res.push_back(oneLine);

            res[i][0]=1;
            for(int j=1;j<i;++j){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
            if(i!=0){
                res[i][i]=1;
            }

        }
        return res;
    }
};

// 这道题就是一个二位 vector 的使用教程

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0118_杨辉三角_H
