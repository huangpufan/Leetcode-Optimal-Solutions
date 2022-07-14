//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_29_顺时针打印矩阵_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_29_顺时针打印矩阵_H

#include "../SolutionCommon.h"

//    剑指 Offer 29. 顺时针打印矩阵 ez

//    输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。

//    示例 1：

//    输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
//    输出：[1,2,3,6,9,8,7,4,5]
//    示例 2：

//    输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
//    输出：[1,2,3,4,8,12,11,10,9,5,6,7]


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        if (matrix.empty()) {
            return {};
        }
        int i = 0, j = -1;
        int row = matrix.size(), col = matrix[0].size();
        vector<vector<bool>> has_printed(row, vector<bool>(col));
        int direction = 0;
        /**
         * 0 right
         * 1 down
         * 2 left
         * 3 up
         */
        int count = 0;
        const int total_count = col * row;
        vector<int> res(total_count);
        int i_plus[]{0, 1, 0, -1};
        int j_plus[]{1, 0, -1, 0};
        int le = 0, ri = col - 1, up = 0, down = row - 1;
        while (count < total_count) {
            int next_i=i+i_plus[direction];
            int next_j=j+j_plus[direction];
            if (next_i >= up && next_i <= down
                && next_j >= le && next_j <= ri
                && has_printed[next_i][next_j] == false) {

                i=next_i;
                j=next_j;

                res[count] = matrix[i][j];
                ++count;
                has_printed[i][j] = true;
            } else {
                direction = (direction + 1) % 4;
            }

        }
        return res;
    }

};


// 这题写起来很是繁琐，优化以后是上面的样子，不太好写，但是写出来挺好看的。



vector<int> spiralOrder(vector<vector<int>> &matrix) {
    if (matrix.empty()) {
        return {};
    }
    int i = 0, j = -1;
    int row = matrix.size(), col = matrix[0].size();
    vector<vector<bool>> has_printed(row, vector<bool>(col));
    int direction = 0;
    /**
     * 0 right
     * 1 down
     * 2 left
     * 3 up
     */
    int count = 0;
    const int total_count = col * row;
    vector<int> res(total_count);

    while (count < total_count) {
        switch (direction) {
            case 0: {
                if (j + 1 <= col - 1 && has_printed[i][j + 1] == false) {
                    res[count] = matrix[i][j + 1];
                    ++count;
                    ++j;
                    has_printed[i][j] = true;
                    break;
                } else {
                    ++direction;
                    break;
                }
            }
            case 1: {
                if (i + 1 <= row - 1 && has_printed[i + 1][j] == false) {
                    res[count] = matrix[i + 1][j];
                    ++count;
                    ++i;
                    has_printed[i][j] = true;
                    break;

                } else {
                    ++direction;
                    break;
                }
            }
            case 2: {
                if (j - 1 >= 0 && has_printed[i][j - 1] == false) {
                    res[count] = matrix[i][j - 1];
                    ++count;
                    --j;
                    has_printed[i][j] = true;
                    break;

                } else {
                    ++direction;
                    break;
                }
            }
            case 3: {
                if (i - 1 >= 0 && has_printed[i - 1][j] == false) {
                    res[count] = matrix[i - 1][j];
                    ++count;
                    --i;
                    has_printed[i][j] = true;
                    break;

                } else {
                    direction = 0;
                    break;
                }
            }
        }
    }
    return res;
}


#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_29_顺时针打印矩阵_H
