//
// Created by hpf on 22-5-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1025_除数博弈_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1025_除数博弈_H

// 1025. 除数博弈 ez
//
// 爱丽丝和鲍勃一起玩游戏，他们轮流行动。爱丽丝先手开局。
//
// 最初，黑板上有一个数字 n 。在每个玩家的回合，玩家需要执行以下操作：
//
// 选出任一 x，满足 0 < x < n 且 n % x == 0 。
// 用 n - x 替换黑板上的数字 n 。
// 如果玩家无法执行这些操作，就会输掉游戏。
//
// 只有在爱丽丝在游戏中取得胜利时才返回 true 。假设两个玩家都以最佳状态参与游戏。

class Solution {
public:
    bool divisorGame(int n) {
        return (n&1)==0;
    }
};

// 开始的思路陷入了质因数，我考虑动态规划得到每个数字对应的能分解质因数的数量，根据该数目的奇偶去判断

// 看了答案发现是简单奇偶问题。牛逼。偶数必胜。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION1025_除数博弈_H
