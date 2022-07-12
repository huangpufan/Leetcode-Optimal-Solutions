//
// Created by hpf on 22-6-2.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0876_链表的中间结点_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0876_链表的中间结点_H

#include "../SolutionCommon.h"

// 876. 链表的中间结点 ez

// 给定一个头结点为 head 的非空单链表，返回链表的中间结点。

// 如果有两个中间结点，则返回第二个中间结点。

class Solution {
public:
    ListNode *middleNode(ListNode *head) {
        int len = 0;
        ListNode *le = head, *ri = head;
        while (ri->next != nullptr) {
            ri = ri->next;
            ++len;
            if ((len & 1) == 0) {
                le = le->next;
            }
        }
        if ((len & 1) == 1) {
            return le->next;
        } else {
            return le;
        }
    }
};

// 很简单的题，快慢指针。注意间隔要是中间的，然后要返回哪个注意一下就行

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0876_链表的中间结点_H
