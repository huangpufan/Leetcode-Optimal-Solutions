//
// Created by hpf on 22-5-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0119_杨辉三角_II_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0119_杨辉三角_II_H
#include "../SolutionCommon.h"

// 119. 杨辉三角 II
// 给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
//
// 在「杨辉三角」中，每个数是它左上方和右上方的数的和。
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>all;
        for(int i=0;i<=rowIndex;++i){
            vector<int>oneLine(i+1);
            all.push_back(oneLine);

            all[i][0]=1;
            for(int j=1;j<i;++j){
                all[i][j]= all[i - 1][j - 1] + all[i - 1][j];
            }
            if(i!=0){
                all[i][i]=1;
            }

        }
        return all[rowIndex];
    }
};

// 和上一题没差啦

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0119_杨辉三角_II_H
