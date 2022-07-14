//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0102_二叉树的层序遍历_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0102_二叉树的层序遍历_H

#include "../SolutionCommon.h"
//    102. 二叉树的层序遍历 ez
//    给你二叉树的根节点 root ，返回其节点值的 层序遍历 。 （即逐层地，从左到右访问所有节点）。
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        queue<TreeNode*>level_queue;
        level_queue.push(root);
        vector<vector<int>>res;
        while(!level_queue.empty()){
            vector<int>level_res;
            int num=level_queue.size();
            for(int i=0;i<num;++i){
                auto& front=level_queue.front();
                level_res.push_back(front->val);
                if(front->left!= nullptr){
                    level_queue.push(front->left);
                }
                if(front->right!= nullptr){
                    level_queue.push(front->right);
                }
                level_queue.pop();
            }
            res.push_back(level_res);
        }
        return res;
    }
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_0102_二叉树的层序遍历_H
