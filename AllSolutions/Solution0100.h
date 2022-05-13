//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0100_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0100_H

#include "../SolutionCommon.h"

/*
 * 给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。

如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
 */

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == nullptr && q == nullptr)
            return true;
        if(!(p!= nullptr&&q!= nullptr)){
            return false;
        }
        if(p->val==q->val){
            return isSameTree(p->left,q->left)&& isSameTree(p->right,q->right);
        }else{
            return false;
        }
    }
};

// 这题也很简单，不用写啥，直接递归很舒服。
// 但是如果不递归的话，我还没有立刻将任何一种递归转化为非递归的能力，这道题想一想吧。
// 我感觉其实任何一种遍历方式，输出个字符串或者数组，然后做比较就可以。
// BFS DFS 先序中序后序 。而且不能使用递归，不然就和这个方法没啥区别了。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0100_H
