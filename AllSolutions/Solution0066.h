//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0066_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0066_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0066_H

#include "../SolutionCommon.h"

/// 66. 加一 ez
// 
//  给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//
//  最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//
//  你可以假设除了整数 0 之外，这个整数不会以零开头。
//

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits);
        int carry=1;
        for(int i=digits.size()-1;i>=0;--i){
            res[i]+=carry;
            if(res[i]>9){
                res[i]=0;
                carry=1;
            }else{
                return res;
            }
        }
//        if(carry==1){
//            res.insert(res.begin(),1);
//        }
        vector<int>res2(res.size()+1);
        res2[0]=1;
        return res2;
    }
};

/*
 * 1 和普通的一点不同就是需要+1，用 vector 返回，如果采取先求数字，那么是一次遍历所有位，然后再遍历一遍+1的数字存储，
 * 存到栈里再输出或者直接存然后翻转数组。也就是最少三次遍历
 *
 * 2 如果采取从后向前一个一个检查++ 的话，只需要两次遍历数字。（因为 vector 不是链表，无论如何需要一次翻转）
 *
 * 3 好吧，最后选取了一个只有最高位进位的时候才会多遍历的写法，算是最优化了。
 *
 * 4 在最后才发现原来如果全有进位说明后面全0。
*/

