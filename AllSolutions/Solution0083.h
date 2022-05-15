//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H

#include "../SolutionCommon.h"


/// 83. 删除排序链表中的重复元素 ez
// 
//  给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。
//


class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr)
            return head;
        ListNode *le = head, *ri = head->next;
        while (le != nullptr && ri != nullptr) {
            if (le->val != ri->val) {
                le = ri;
                ri = ri->next;
            } else {
                ListNode *tmp = ri;
                ri = ri->next;
                le->next = ri;
                delete tmp;
            }
        }
        return head;
    }
};

// ezez