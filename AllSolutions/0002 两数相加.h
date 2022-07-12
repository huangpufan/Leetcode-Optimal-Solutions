//
// Created by hpf on 22-5-10.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0002_两数相加_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0002_两数相加_H

#include "../SolutionCommon.h"


// 2. 两数相加 mid
//
//  给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照逆序的方式存储的，并且每个节点只能存储一位数字。
//
//  请你将两个数相加，并以相同形式返回一个表示和的链表。
//
//  你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//
//

class Solution{

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *p1 = l1, *p2 = l2;
        ListNode *head = new ListNode(-1), *p3 = head;

        int nextBit = 0;
        int thisBit = 0;
        while (p1 != nullptr || p2 != nullptr || nextBit != 0) {

            // 草了，我是真的短。
            thisBit = nextBit+((p1== nullptr)?0:p1->val)+((p2== nullptr)?0:p2->val);

            if (thisBit >= 10) {
                nextBit = 1;
                thisBit = thisBit % 10;
            } else {
                nextBit = 0;
            }
            p3->next = new ListNode(thisBit);
            p3 = p3->next;
            if(p1!= nullptr){
                p1=p1->next;
            }
            if(p2!= nullptr){
                p2=p2->next;
            }
        }
        return head->next;

    }
};

/*
 * 原本的方法我记得是原来学严蔚敏的数据结构学的思路，先遍历到最短的，然后写两个循环。但是写完自己也觉得冗长
 *
 * 果然，有更好的办法，而且这个思路可以用在很多类似的问题上。类似于函数指针本质的用法，就是外界结构不变，内部处理更改。
 *
 */
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *p1 = l1, *p2 = l2;
    ListNode *head = new ListNode(-1), *p3 = head;

    int nextBit = 0;
    int thisBit = 0;
    while (p1 != nullptr && p2 != nullptr) {
        thisBit = nextBit + p1->val + p2->val;
        if (thisBit >= 10) {
            nextBit = 1;
            thisBit = thisBit % 10;
        } else {
            nextBit = 0;
        }
        p3->next = new ListNode(thisBit);
        p3 = p3->next;
        p1 = p1->next;
        p2 = p2->next;
    }
    while (p1 != nullptr) {
        thisBit = p1->val + nextBit;
        if (thisBit >= 10) {
            thisBit %= 10;
            nextBit = 1;
        } else {
            nextBit = 0;
        }
        p3->next = new ListNode(thisBit);
        p3 = p3->next;
        p1 = p1->next;
    }
    while (p2 != nullptr) {
        thisBit = p2->val + nextBit;
        if (thisBit >= 10) {
            thisBit %= 10;
            nextBit = 1;
        } else {
            nextBit = 0;
        }
        p3->next = new ListNode(thisBit);
        p3 = p3->next;
        p2 = p2->next;
    }
    if (nextBit != 0) {
        p3->next = new ListNode(nextBit);
    }
    return head->next;
}

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0002_两数相加_H
