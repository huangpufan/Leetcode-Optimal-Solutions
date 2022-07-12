//
// Created by hpf on 22-6-30.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0124_二叉树中的最大路径和_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0124_二叉树中的最大路径和_H

#include "../SolutionCommon.h"

// 124. 二叉树中的最大路径和 hard
//
// 路径 被定义为一条从树中任意节点出发，沿父节点-子节点连接，达到任意节点的序列。同一个节点在一条路径序列中 至多出现一次 。该路径 至少包含一个 节点，且不一定经过根节点。
//
// 路径和 是路径中各节点值的总和。
//
// 给你一个二叉树的根节点 root ，返回其 最大路径和
class Solution {
public:
    int max = INT32_MIN;
    unordered_map<TreeNode *, int> nodeMax;

    int maxPathSum(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        getMax(root);
        return max;
    }


    int getMax(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        int le = std::max(0, getMax(root->left));
        int ri = std::max(0, getMax(root->right));

        int sum = root->val+le+ri;
        if (sum > max) {
            max = sum;
        }
        return root->val+std::max(le,ri);
    }
};
// 代码不够简洁。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0124_二叉树中的最大路径和_H
