//
// Created by hpf on 22-5-19.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0141_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0141_H

#include "../SolutionCommon.h"


/// 141. 环形链表 ez

// 给你一个链表的头节点 head ，判断链表中是否有环。

// 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，

// 评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。注意：pos 不作为参数进行传递 。仅仅是为了标识链表的实际情况。

// 如果链表中存在环 ，则返回 true 。 否则，返回 false 。


class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head== nullptr){
            return false;
        }
        ListNode* dummyHead=new ListNode;
        dummyHead->next=head;

        ListNode* slow=dummyHead,*fast=head;
        while(fast->next!= nullptr&&fast->next->next!= nullptr){
            if(slow!=fast){
                slow=slow->next;
                fast=fast->next->next;
            }else{
                return true;
            }
        }
        return false;
    }
};

// 第一反应是快慢指针。每次步长差一，一定相遇。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0141_H
