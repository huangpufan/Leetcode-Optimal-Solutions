//
// Created by hpf on 22-5-16.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0104_二叉树的最大深度_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0104_二叉树的最大深度_H
#include "../SolutionCommon.h"

// 104. 二叉树的最大深度

// 给定一个二叉树，找出其最大深度。

// 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

// 说明: 叶子节点是指没有子节点的节点。


class Solution {
public:
    // 递归是把当前问题分解为 1+ 小规模问题
    // 迭代我们可以层序遍历，用队列是个好的选择，前面的出和后面的入没有冲突，每次加1，直到所有的层都被计数
    // 我们考虑队列中的状态，初始化为根节点，中间时刻最少有一层节点，最多有相邻两层节点。
    // 那么很明显，需要记录的就是当前遍历层最后一个节点的位置.
    // 终止条件为队列为空，那么让下一层进完然后再退出就可以了。迭代速度是真快，以后要把所有递归和迭代都实现一遍。


    int maxDepth(TreeNode* root) {
        if(root== nullptr){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int depth=1;
        int layerPointCount=1;
        while(!q.empty()){
            for(int i=0; i < layerPointCount; i++){
                auto point=q.front();
                q.pop();
                if(point->left!= nullptr){
                    q.push(point->left);
                }
                if(point->right!= nullptr){
                    q.push(point->right);
                }
            }
            layerPointCount=q.size();
            if(layerPointCount!=0){
                ++depth;
            }
        }
        return depth;
    }


};


// 递归做法
int maxDepth(TreeNode* root) {
    if(root== nullptr){
        return 0;
    }
    int LDepth= maxDepth(root->left),RDepth= maxDepth(root->right);
    return 1+((LDepth>RDepth)?LDepth:RDepth);
}

// 最简单的递归模板，如果想要转迭代的话也非常容易，但是通过这个题思考一下递归转迭代的基本范式吧



#endif //LEETCODE_OPTIMAL_SOLUTIONS_0104_二叉树的最大深度_H
