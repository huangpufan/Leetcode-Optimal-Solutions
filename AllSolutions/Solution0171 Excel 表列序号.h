//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0171_EXCEL_表列序号_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0171_EXCEL_表列序号_H
#include "../SolutionCommon.h"

// 171. Excel 表列序号 ez
// 给你一个字符串 columnTitle ，表示 Excel 表格中的列名称。返回 该列名称对应的列序号 。

// 例如：

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28
// ...


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(const auto & c:columnTitle){
            res*=26;
            res+=(c-'A'+1);
        }
        return res;
    }
};

// 进制转换 这题真滴 nt，做这个是浪费时间

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0171_EXCEL_表列序号_H
