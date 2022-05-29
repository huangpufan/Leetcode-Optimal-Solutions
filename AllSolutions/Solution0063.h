//
// Created by hpf on 22-5-29.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0063_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0063_H

#include "../SolutionCommon.h"


// 63. 不同路径 II mid

// 一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

// 机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish”）。

// 现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？

// 网格中的障碍物和空位置分别用 1 和 0 来表示。

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> routeCount(m, vector<int>(n, 0));
        if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1) {
            return 0;
        }
        // 这是真滴棒，这个循环
        for (int i = 0; i < m && obstacleGrid[i][0] == 0; ++i) {
            routeCount[i][0] = 1;
        }
        for (int j = 0; j < n && obstacleGrid[0][j] == 0; ++j) {
            routeCount[0][j] = 1;
        }
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                if(obstacleGrid[i][j]==0){
                    routeCount[i][j]=routeCount[i-1][j]+routeCount[i][j-1];
                }
            }
        }

        return routeCount[m-1][n-1];
    }
};

// 开始的思路，每次的判断太多了，应该拿出来。

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    vector<vector<int>> routeCount(m, vector<int>(n, 0));
    if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1) {
        return 0;
    }
    for (int i = m - 1; m >= 0; m--) {
        for (int j = n - 1; j >= 0; j--) {
            if (obstacleGrid[i][j] == 1) {
                routeCount[i][j] = 0;
                continue;
            }
            if (i == m - 1 && j == n - 1) {
                routeCount[i][j] = 1;
            } else if (i == m - 1) {
                routeCount[i][j] = routeCount[i][j + 1];
            } else if (j == n - 1) {
                routeCount[i][j] = routeCount[i + 1][j];
            } else {
                routeCount[i][j] = routeCount[i + 1][j] + routeCount[i][j + 1];
            }
        }
    }
    return routeCount[0][0];
}

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0063_H
