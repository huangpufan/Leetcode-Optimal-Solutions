//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0367_有效的完全平方数_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0367_有效的完全平方数_H

// 367. 有效的完全平方数 ez

// 给定一个 正整数 num ，编写一个函数，如果 num 是一个完全平方数，则返回 true ，否则返回 false 。

// 进阶：不要 使用任何内置的库函数，如  sqrt 。

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 0; num > 0; i++) {
            num -= (1 + i * 2);
        }
        return num==0;
    }
};

// 这个问题很有趣，一眼看上去数字有三个状态，小大等，那么必然是二分可以做。
// 但看评论有个很牛逼的数学小性质
// 4=1+3
// 9=1+3+5
// 16=1+3+5+7 全为奇数之和

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0367_有效的完全平方数_H
