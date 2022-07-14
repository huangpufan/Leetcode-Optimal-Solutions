//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_25_合并两个排序的链表_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_25_合并两个排序的链表_H

#include "../SolutionCommon.h"
//剑指 Offer 25. 合并两个排序的链表 ez

//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。

//示例1：

//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4
//限制：

//0 <= 链表长度 <= 1000

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

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_25_合并两个排序的链表_H
