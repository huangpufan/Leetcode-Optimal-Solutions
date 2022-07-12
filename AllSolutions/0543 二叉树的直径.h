//
// Created by hpf on 22-6-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0543_二叉树的直径_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0543_二叉树的直径_H

#include "../SolutionCommon.h"
// 543. 二叉树的直径 ez
//
// 给定一棵二叉树，你需要计算它的直径长度。一棵二叉树的直径长度是任意两个结点路径长度中的最大值。这条路径可能穿过也可能不穿过根结点。

class Solution {
public:
    int max = INT32_MIN;

    int diameterOfBinaryTree(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        getMax(root);
        return max-1;
    }

    int getMax(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        int le = getMax(root->left);
        int ri = getMax(root->right);

        int sum = 1+le+ri;
        if (sum > max) {
            max = sum;
        }
        return 1+std::max(le,ri);
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0543_二叉树的直径_H
