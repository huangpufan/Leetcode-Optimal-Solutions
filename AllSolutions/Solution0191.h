//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0191_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0191_H
#include "../SolutionCommon.h"


// 191. 位1的个数

// 编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。

// 提示：

// 请注意，在某些语言（如 Java）中，没有无符号整数类型。在这种情况下，输入和输出都将被指定为有符号整数类型，并且不应影响您的实现，

// 因为无论整数是有符号的还是无符号的，其内部的二进制表示形式都是相同的。

// 在 Java 中，编译器使用二进制补码记法来表示有符号整数。因此，在上面的 示例 3 中，输入表示有符号整数 -3。

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            if(1==(n&1)){
                ++ count;
            }
            n>>=1;
        }
        return count;
    }
};

// 唯一要点就是 与运算的优先级贼低，得加个括号

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0191_H
