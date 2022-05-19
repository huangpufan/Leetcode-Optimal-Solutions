//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0155_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0155_H

#include "../SolutionCommon.h"


/// 155. 最小栈 ez

// 设计一个支持 push ，pop ，topNode 操作，并能在常数时间内检索到最小元素的栈。

// 实现 MinStack 类:

// MinStack() 初始化堆栈对象。
// void push(int val) 将元素val推入堆栈。
// void pop() 删除堆栈顶部的元素。
// int topNode() 获取堆栈顶部的元素。
// int getMin() 获取堆栈中的最小元素。

struct Node{
    int min;
    int val;
    Node* next;
};

class MinStack {
public:

    Node *topNode;
    Node *bottom;
    bool isEmpty = true;
    int size = 0;

    MinStack() {
        bottom = new Node;
        topNode = bottom;
        isEmpty = true;
        size = 0;
    }

    void push(int val) {
        if (isEmpty) {
            bottom->val = val;
            isEmpty = false;
            bottom->min=val;
        } else {
            Node *tmp = new Node;
            tmp->val = val;
            tmp->next = topNode;
            topNode = tmp;
            topNode->min=std::min(val,topNode->next->min);
        }
        ++size;
    }

    void pop() {
        if (isEmpty) {
            return;
        }
        --size;
        if (size == 0) {
            isEmpty = true;
            return;
        }

        Node *tmp = topNode;
        topNode = topNode->next;

        delete tmp;
    }

    int top() {
        if (isEmpty) {
            return -1;
        }
        return topNode->val;
    }

    int getMin() {
        if (isEmpty) {
            return -1;
        }

        return topNode->min;
    }
};

// 核心是节点里放个 min，别的没啥好说的，我增加了几个用不到的东西。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0155_H
