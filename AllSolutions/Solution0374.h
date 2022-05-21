//
// Created by hpf on 22-5-21.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0374_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0374_H
// 374. 猜数字大小 ez

// 猜数字游戏的规则如下：
//
// 每轮游戏，我都会从 1 到 n 随机选择一个数字。 请你猜选出的是哪个数字。
// 如果你猜错了，我会告诉你，你猜测的数字比我选出的数字是大了还是小了。
// 你可以通过调用一个预先定义好的接口 int guess(int num) 来获取猜测结果，返回值一共有 3 种可能的情况（-1，1 或 0）：
//
// -1：我选出的数字比你猜的数字小 pick < num
// 1：我选出的数字比你猜的数字大 pick > num
// 0：我选出的数字和你猜的数字一样。恭喜！你猜对了！pick == num

// 返回我选出的数字。

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */


class Solution {
public:
    int guessNumber(int n) {
        int le=1,ri=n;
        int mid=le+(ri-le)/2;
        while(le<ri){
            mid=le+(ri-le)/2;
            switch (guess(mid)) {
                case -1:{
                    ri=mid;
                }
                    break;
                case 1:{
                    le=mid+1;
                }
                    break;
                case 0:{
                    return mid;
                }
            }
        }
        return le;
    }
};

// 猪猪题，二分查找

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0374_H
