//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_54_二叉搜索树的第K大节点_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_54_二叉搜索树的第K大节点_H

#include "../SolutionCommon.h"
//    剑指 Offer 54. 二叉搜索树的第k大节点 ez
//
//    给定一棵二叉搜索树，请找出其中第 k 大的节点的值。


class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        traverse(root);
        return res[k-1];
    }
    void traverse(TreeNode* p){
        if(p== nullptr){
            return;
        }
        traverse(p->right);
        res.push_back(p->val);
        traverse(p->left);
    }
    vector<int>res;
};


// 反中序遍历即可得到
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_54_二叉搜索树的第K大节点_H
