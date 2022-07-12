//
// Created by hpf on 22-6-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0101_对称二叉树_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0101_对称二叉树_H

#include "../SolutionCommon.h"

// 101. 对称二叉树 ez
//
// 给你一个二叉树的根节点 root ， 检查它是否轴对称。

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root== nullptr){
            return false;
        }
        return compareNode(root->left,root->right);
        return false;
    }
    bool compareNode(const TreeNode* left,const TreeNode*  right){
        if(left== nullptr&&right== nullptr){
            return true;
        }
        if(left==nullptr||right== nullptr||left->val!=right->val){
            return false;
        }
        // left.val == right.val now
        // I should compare the left's left & right's right and compare the other one
        return compareNode(left->left,right->right)&& compareNode(left->right,right->left);
    }

};

// 中序遍历的话需要遍历所有节点，感觉上不如递归从上而下地打印来的快。
// 因为后者能够尽快地退出

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0101_对称二叉树_H
