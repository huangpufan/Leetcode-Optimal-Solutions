//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_55_I_二叉树的深度_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_55_I_二叉树的深度_H

#include "../SolutionCommon.h"

//    剑指 Offer 55 - I. 二叉树的深度 ez

//    输入一棵二叉树的根节点，求该树的深度。从根节点到叶节点依次经过的节点（含根、叶节点）形成树的一条路径，最长路径的长度为树的深度。

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root== nullptr){
            return 0;
        }
        getMaxDepth(root,0);
        return max;
    }
    void getMaxDepth(TreeNode* p,int depth){
        if(p!= nullptr){
            ++depth;
            if(depth>max){
                max=depth;
            }
            getMaxDepth(p->left,depth);
            getMaxDepth(p->right,depth);
        }
    }
    int max=0;
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_55_I_二叉树的深度_H
