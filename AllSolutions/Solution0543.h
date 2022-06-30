//
// Created by hpf on 22-6-26.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0543_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0543_H

#include "../SolutionCommon.h"
// 543. 二叉树的直径 ez
//
// 给定一棵二叉树，你需要计算它的直径长度。一棵二叉树的直径长度是任意两个结点路径长度中的最大值。这条路径可能穿过也可能不穿过根结点。

class Solution {
public:
    int max=0;
    unordered_map<TreeNode*,int>nodeDepth;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root== nullptr){
            return 0;
        }
        updateMax(root);
        return max-1;
    }
    int getDepth(TreeNode* node){
        if(node== nullptr){
            return 0;
        }
        if(nodeDepth.find(node)!=nodeDepth.end()){
            return nodeDepth[node];
        }
        int val= 1+std::max(getDepth(node->left), getDepth(node->right));
        nodeDepth[node]=val;
        return val;
    }
    void updateMax(TreeNode*root){
        if(root== nullptr){
            return;
        }
        int length=1+ getDepth(root->left)+ getDepth(root->right);
        if(length>max){
            max=length;
        }
        updateMax(root->left);
        updateMax(root->right);
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0543_H
