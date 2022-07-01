//
// Created by hpf on 22-7-1.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_04_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_04_H

#include "../SolutionCommon.h"
// 剑指 Offer 04. 二维数组中的查找 mid
// 在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
// 请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int max_row=matrix.size()-1,max_col=matrix[0].size()-1;
        int cur_row=0,cur_col=max_col;
        while(cur_row<=matrix.size()-1&&cur_col>=0){
            if(matrix[cur_row][cur_col]<target){
                ++cur_row;
            }else if(matrix[cur_row][cur_col]>target){
                --cur_col;
            }else{
                return true;
            }
        }
        return false;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_04_H
