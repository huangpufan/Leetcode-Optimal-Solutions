//
// Created by hpf on 22-5-10.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0002_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0002_H

#include "../SolutionCommon.h"

class Solution0002 {

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

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0002_H
