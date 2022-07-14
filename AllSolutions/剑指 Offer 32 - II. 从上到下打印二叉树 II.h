//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_32_II_从上到下打印二叉树_II_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_32_II_从上到下打印二叉树_II_H

#include "../SolutionCommon.h"

//    剑指 Offer 32 - II. 从上到下打印二叉树 II  ez

//    从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。

//
//    例如:
//    给定二叉树: [3,9,20,null,null,15,7],
//
//     3
//    / \
//   9  20
//     /  \
//    15   7
//    返回其层次遍历结果：
//
//    [
//    [3],
//    [9,20],
//    [15,7]
//    ]

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

// 猪猪题 注意判空

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_32_II_从上到下打印二叉树_II_H
