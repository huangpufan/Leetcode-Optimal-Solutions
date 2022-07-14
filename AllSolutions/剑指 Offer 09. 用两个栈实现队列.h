//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_09_用两个栈实现队列_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_09_用两个栈实现队列_H

#include "../SolutionCommon.h"

//    剑指 Offer 09. 用两个栈实现队列 ez

//    用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和
//    deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的功能。(若队列中没有元素，deleteHead 操作返回 -1 )

class CQueue {
public:
    CQueue() {

    }
    stack<int>in_stack;
    stack<int>out_stack;
    void appendTail(int value) {
        while(!out_stack.empty()){
            auto & v=out_stack.top();
            in_stack.push(v);
            out_stack.pop();
        }
        in_stack.push(value);
    }

    int deleteHead() {
        if(in_stack.empty()&&out_stack.empty()){
            return -1;
        }
        while(!in_stack.empty()){
            auto & v=in_stack.top();
            out_stack.push(v);
            in_stack.pop();
        }
        int res=out_stack.top();
        out_stack.pop();
        return res;

    }
};

// ez，猪猪题

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_09_用两个栈实现队列_H
