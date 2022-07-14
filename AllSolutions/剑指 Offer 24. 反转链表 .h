//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_24_反转链表_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_24_反转链表_H

#include "../SolutionCommon.h"
//    剑指 Offer 24. 反转链表
//    定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode dummy_head;
        dummy_head.next = head;
        ListNode *p = head->next, *next_p = nullptr;
        head->next=nullptr;
        while (p != nullptr) {
            // p 为本次要插入头后面的
            // next_p 为下次
            next_p = p->next;

            p->next=dummy_head.next;
            dummy_head.next=p;

            p = next_p;
        }
        return dummy_head.next;
    }
};

// 我是啥软。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_24_反转链表_H
