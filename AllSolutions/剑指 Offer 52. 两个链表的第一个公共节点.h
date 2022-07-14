//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_52_两个链表的第一个公共节点_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_52_两个链表的第一个公共节点_H

#include "../SolutionCommon.h"
//    剑指 Offer 52. 两个链表的第一个公共节点 ez
//    输入两个链表，找出它们的第一个公共节点。


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_a=0,len_b=0;
        ListNode dummy_head_a,dummy_head_b;
        dummy_head_a.next=headA;
        dummy_head_b.next=headB;
        ListNode* p=&dummy_head_a;
        while(p->next!= nullptr){
            p=p->next;
            ++len_a;
        }
        p=&dummy_head_b;
        while(p->next!= nullptr){
            p=p->next;
            ++len_b;
        }
        ListNode* longer= nullptr,*shorter= nullptr;
        int diff= max(len_a,len_b)-min(len_a,len_b);
        if(len_a>len_b){
            longer=&dummy_head_a;
            shorter=&dummy_head_b;
        }else{
            longer=&dummy_head_b;
            shorter=&dummy_head_a;
        }
        for(int i=0;i<diff;++i){
            longer=longer->next;
        }
        while(longer!= nullptr&&shorter!= nullptr){
            if(longer==shorter){
                return longer;
            }else{
                longer=longer->next;
                shorter=shorter->next;
            }
        }
        return nullptr;
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_52_两个链表的第一个公共节点_H
