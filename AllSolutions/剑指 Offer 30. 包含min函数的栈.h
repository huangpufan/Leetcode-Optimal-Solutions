//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_30_包含MIN函数的栈_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_30_包含MIN函数的栈_H

#include "../SolutionCommon.h"
//    剑指 Offer 30. 包含min函数的栈 ez

//    设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//
//    实现 MinStack 类:
//
//    MinStack() 初始化堆栈对象。
//    void push(int val) 将元素val推入堆栈。
//    void pop() 删除堆栈顶部的元素。
//    int top() 获取堆栈顶部的元素。
//    int getMin() 获取堆栈中的最小元素。

class MinStack {
private:
    stack<int>monotonous;//单调递减栈
    stack<int>min_stack;
public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        min_stack.push(x);
        if(monotonous.empty()||x<=monotonous.top()){
            monotonous.push(x);
        }
    }

    void pop() {
        if(min_stack.top()==monotonous.top()){
            monotonous.pop();
        }
        min_stack.pop();
    }

    int top() {
        return min_stack.top();
    }

    int min() {
        return monotonous.top();
    }

};


// 猪猪题。但是注意 push 之前要判空！
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_30_包含MIN函数的栈_H
