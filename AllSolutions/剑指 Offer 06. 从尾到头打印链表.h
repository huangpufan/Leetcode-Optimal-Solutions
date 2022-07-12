//
// Created by hpf on 22-7-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_06_从尾到头打印链表_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_06_从尾到头打印链表_H

#include "../SolutionCommon.h"

//    剑指 Offer 06. 从尾到头打印链表 ez

//    输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

//    示例 1：
//
//    输入：head = [1,3,2]
//    输出：[2,3,1]


class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        ListNode dummyHead;
        dummyHead.next=head;
        int count=0;
        ListNode* p=&dummyHead;
        while(p->next!= nullptr){
            ++count;
            p=p->next;
        }
        vector<int>res(count);
        p=&dummyHead;
        for(int i=0;i<count;i++){
            p=p->next;
            res[count-i-1]=p->val;
        }
        return res;
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_06_从尾到头打印链表_H
