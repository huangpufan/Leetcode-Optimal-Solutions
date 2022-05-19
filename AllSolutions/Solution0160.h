//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0160_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0160_H

#include "../SolutionCommon.h"

/// 160. 相交链表 ez

// 给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode *p = headA, *q = headB;
        int lenA = 1, lenB = 1;

        while (p != nullptr && p->next != nullptr) {
            ++lenA;
            p = p->next;
        }
        while (q != nullptr && q->next != nullptr) {
            ++lenB;
            q = q->next;
        }
        if (p != q) {
            return nullptr;
        }
        ListNode *longer = nullptr, *shorter = nullptr;
        int bigger = std::max(lenA,lenB), smaller = std::min(lenA,lenB);

        if (lenA < lenB) {
            longer = headB;
            shorter = headA;
        } else {
            longer = headA;
            shorter = headB;
        }

        for (int i = 0; i < bigger-smaller;i++){
            longer=longer->next;
        }
        while(longer!=shorter){
            longer=longer->next;
            shorter=shorter->next;
        }
        return longer;
    }
};



// 拉到同一起跑线对比是否相同就行了，不过我滴代码写的很漂亮。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0160_H
