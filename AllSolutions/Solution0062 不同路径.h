//
// Created by hpf on 22-5-25.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0062_不同路径_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0062_不同路径_H

#include "../SolutionCommon.h"

// 62. 不同路径 mid

// 一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

// 机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。

// 问总共有多少条不同的路径？

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> pathCount(m, vector<int>(n, 0));
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (j == n - 1 && i == m - 1) {
                    pathCount[i][j] = 1;
                    continue;
                } else if (j == n - 1) {
                    pathCount[i][j]=pathCount[i+1][j];
                }else if(i==m-1){
                    pathCount[i][j]=pathCount[i][j+1];
                }else {
                    pathCount[i][j]=pathCount[i+1][j]+pathCount[i][j+1];
                }
            }
        }

        return pathCount[0][0];
    }
};

// 没啥好说的，最简单的动态规划

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0062_不同路径_H
