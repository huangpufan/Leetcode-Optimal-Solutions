//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_移除链表元素_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_移除链表元素_H

#include "../SolutionCommon.h"

// 203. 移除链表元素 ez
// 
//  给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//

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
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0203_移除链表元素_H
