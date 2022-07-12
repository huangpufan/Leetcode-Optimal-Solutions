//
// Created by hpf on 22-6-4.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0412_FIZZ_BUZZ_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0412_FIZZ_BUZZ_H

#include "../SolutionCommon.h"


// 412. Fizz Buzz ez

// 给你一个整数 n ，找出从 1 到 n 各个整数的 Fizz Buzz 表示，并用字符串数组 answer（下标从 1 开始）返回结果，其中：

// answer[i] == "FizzBuzz" 如果 i 同时是 3 和 5 的倍数。
// answer[i] == "Fizz" 如果 i 是 3 的倍数。
// answer[i] == "Buzz" 如果 i 是 5 的倍数。
// answer[i] == i （以字符串形式）如果上述条件全不满足。

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string>res(n);

        for(int i=1;i<=n;++i){
            if(i%3==0){
                res[i-1]="Fizz";
            }
            if(i%5==0){
                res[i-1]+="Buzz";
            }
            if(res[i-1].empty()){
                res[i-1]= to_string(i);
            }
        }
        return res;
    }
};

// 我敲，这是什么题，C 语言入门题目

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0412_FIZZ_BUZZ_H
