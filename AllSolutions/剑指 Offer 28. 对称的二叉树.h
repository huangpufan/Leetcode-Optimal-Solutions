//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_28_对称的二叉树_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_28_对称的二叉树_H

#include "../SolutionCommon.h"
//    剑指 Offer 28. 对称的二叉树 ez

//    请实现一个函数，用来判断一棵二叉树是不是对称的。如果一棵二叉树和它的镜像一样，那么它是对称的。
//
//    示例 1：
//
//    输入：root = [1,2,2,3,4,4,3]
//    输出：true
//    示例 2：
//
//    输入：root = [1,2,2,null,3,null,3]
//    输出：false
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root== nullptr){
            return true;
        }
        return isNodeSymmetric(root->left,root->right);
    }

    bool isNodeSymmetric(TreeNode *le, TreeNode *ri) {

        if (le == nullptr && ri == nullptr) {
            return true;
        }else if(le== nullptr||ri== nullptr){
            return false;
        }else if(le->val!=ri->val){
            return false;
        }
        return isNodeSymmetric(le->left,ri->right)&& isNodeSymmetric(le->right,ri->left);
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_28_对称的二叉树_H
