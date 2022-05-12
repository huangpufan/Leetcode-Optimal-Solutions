//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_H

#include "../SolutionCommon.h"


class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        if(head==nullptr){
            return head;
        }
        ListNode *preHead = new ListNode,*p=preHead;
        preHead->next = head;

        while (p != nullptr ) {
            if(p->next!= nullptr){
                if(p->next->val==val){
                    auto tmp=p->next;
                    p->next=p->next->next;
                    delete tmp;
                }else{
                    p=p->next;
                }
            }else{
                break;
            }
        }
        return preHead->next;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_H
