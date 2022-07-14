//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_18_删除链表的节点_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_18_删除链表的节点_H

#include "../SolutionCommon.h"
//    剑指 Offer 18. 删除链表的节点 ez

//    给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
//
//    返回删除后的链表的头节点。
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode dummy_head;
        dummy_head.next=head;
        ListNode* pre=&dummy_head,*p=dummy_head.next;
        while(p->val!=val){
            p=p->next;
            pre=pre->next;
        }
        pre->next=p->next;
        return dummy_head.next;
    }
};


#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_18_删除链表的节点_H
