//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0083_H

#include "../SolutionCommon.h"

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