//
// Created by hpf on 22-6-7.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONLCP_44_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONLCP_44_H

#include "../Common.h"

// LCP 44. 开幕式焰火 ez

// 「力扣挑战赛」开幕式开始了，空中绽放了一颗二叉树形的巨型焰火。
// 给定一棵二叉树 root 代表焰火，节点值表示巨型焰火这一位置的颜色种类。请帮小扣计算巨型焰火有多少种不同的颜色。

class Solution {
public:
    unordered_set<int> allColorSet;
    int numColor(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        } else {
            allColorSet.insert(root->val);
            numColor(root->left);
            numColor(root->right);
        }
        return allColorSet.size();
    }
};

// 猪猪题
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONLCP_44_H
