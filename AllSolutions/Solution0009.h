//
// Created by hpf on 22-5-11.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0009_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0009_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0009_H

#include "../SolutionCommon.h"

/*
 * 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

例如，121 是回文，而 123 不是。

 */
class Solution0009 {
public:
    bool isPalindrome(int x) {
        // 本题看起来的最优解就是翻转数字，这样不需要很多位存，然后只需要一个 int 空间
        if (x < 0) {
            return false;
        }
        const int inputX=x;
        // Using int here got error.
        long reverse = 0;
        while (x > 0) {
            reverse = reverse * 10 + (x % 10);
            x /= 10;
        }
        return reverse == inputX;
    }
};


/*
 * 这道题是 PF-A01 做的第二道题目
 * 下面是我第一反应的做法，其实无可厚非，如果是往常的我应该直接就过了，但是因为是要做最优解，害的看看评论
 * 一定要找最好的做法，这也是本项目的最大意义所在，打破自己的舒适区，去看看更强的人和做法。
 */

//bool isPalindrome(int x) {
//    vector<int>everyBit;
//    if(x<0){
//        return false;
//    }
//    while(x>0){
//        everyBit.push_back(x%10);
//        x/=10;
//
//    }
//    for(size_t i=0;i<everyBit.size()/2;i++){
//        if(everyBit[i]!=everyBit[everyBit.size()-1-i]){
//            return false;
//        }
//    }
//    return true;
//}