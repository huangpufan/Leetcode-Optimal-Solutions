//
// Created by hpf on 22-5-17.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0019_删除链表的倒数第_N_个结点_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0019_删除链表的倒数第_N_个结点_H

#include "../SolutionCommon.h"

// 19. 删除链表的倒数第 N 个结点 mid

// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。


class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // 快慢指针写法

        queue<ListNode *> q;
        ListNode *preHead = new ListNode;
        preHead->next = head;

        ListNode *fast = preHead, *slow = preHead;
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;

        auto res = preHead->next;

        delete preHead;

        return res;
    }
};
// 快慢指针会效率更高一些么，好像会的，不需要维护队列这个数据结构。
// 我这么写是因为它最形象。我们就是拿一个比 n 长 1 的小套子，在绳子上从头到尾撸过去。
// 撸到最后，把头后面的小揪揪拿掉就是了。

// 队列写法
ListNode *removeNthFromEnd(ListNode *head, int n) {


    queue<ListNode *> q;
    ListNode *preHead = new ListNode;

    preHead->next = head;
    ListNode *p = preHead;
    for (int i = 0; i < n + 1; i++) {
        q.push(p);
        p = p->next;
    }
    while (p != nullptr) {
        q.push(p);
        p = p->next;
        q.pop();
    }
    ListNode *leftNode = q.front();
    ListNode *tmp = leftNode->next;
    leftNode->next = leftNode->next->next;
    if (tmp != nullptr) {
//           这里我的报错百思不得其解，会告诉我释放有问题，空指针引用？但我都做了判断
//        delete tmp;
    }

    auto res = preHead->next;
    delete preHead;

    return res;
}

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0019_删除链表的倒数第_N_个结点_H
