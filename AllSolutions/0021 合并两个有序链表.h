//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0021_合并两个有序链表_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0021_合并两个有序链表_H

#include "../SolutionCommon.h"
//    21. 合并两个有序链表 ez

//    将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode dummy_head;
        ListNode *p = &dummy_head;
        while (l1 != nullptr && l2 != nullptr) {
            ListNode *q = new ListNode((l1->val < l2->val) ? (l1->val) : l2->val);
            (l1->val < l2->val) ? l1=l1->next : l2=l2->next;
            p->next=q;
            p=p->next;
        }
        ListNode* l= nullptr;
        if(l1== nullptr){
            l=l2;
        }else{
            l=l1;
        }
        while(l!= nullptr){
            ListNode*q=new ListNode(l->val);
            p->next=q;
            p=p->next;
            l=l->next;
        }
        return dummy_head.next;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_0021_合并两个有序链表_H
