//
// Created by hpf on 22-5-18.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0237_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0237_H
#include "../SolutionCommon.h"

/// 237. 删除链表中的节点
//
// 请编写一个函数，用于 删除单链表中某个特定节点 。在设计函数时需要注意，你无法访问链表的头节点 head ，只能直接访问 要被删除的节点 。
//
// 题目数据保证需要删除的节点 不是末尾节点 。

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *(node->next);
    }
};



// 我参透了指针
// 按理说，这里 node=node.next 就可以。但实际上不可以
// 根本原因是，传入的是值变量（一级指针），而不是二级指针/一级指针引用。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0237_H


// 小猪做法，还搁着一个一个走呢
    void deleteNode(ListNode* node) {
        ListNode *p=node,*q= nullptr;
        while(p!= nullptr&&p->next!= nullptr){
            p->val=p->next->val;
            q=p;
            p=p->next;
        }
        if(q!= nullptr){
            delete q;
        }
    }
