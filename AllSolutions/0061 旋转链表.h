//
// Created by hpf on 22-5-25.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0061_旋转链表_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0061_旋转链表_H

#include "../SolutionCommon.h"

// 61. 旋转链表 mid
// 给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {

        int len = 0;
        // 我才意识到，函数里的头可以设置成变量，而非指针
        ListNode dummyHead;
        dummyHead.next = head;
        ListNode *fast = &dummyHead, *slow = &dummyHead, *p = &dummyHead;
        while (p->next != nullptr) {
            ++len;
            p = p->next;
        }
        if(len<=1||k==0||(k%len)==0){
            return head;
        }
        k %= len;
        for (int i = 0; i < k; i++) {
            // 此处未做错误控制，做题嘛
            fast = fast->next;
        }
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        dummyHead.next = slow->next;
        fast->next = head;
        slow->next = nullptr;
        return dummyHead.next;
    }
};

// 快慢指针，间隔k就行了


#endif //LEETCODE_OPTIMAL_SOLUTIONS_0061_旋转链表_H
