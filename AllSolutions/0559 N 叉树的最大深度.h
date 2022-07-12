//
// Created by hpf on 22-5-31.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_0559_N_叉树的最大深度_H
#define LEETCODE_OPTIMAL_SOLUTIONS_0559_N_叉树的最大深度_H

#include "../SolutionCommon.h"

// 559. N 叉树的最大深度 ez

// 给定一个 N 叉树，找到其最大深度。

// 最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。

// N 叉树输入按层序遍历序列化表示，每组子节点由空值分隔（请参见示例）。



class Solution {
public:

    // 这道题的迭代不知道为什么，居然效率不是击败了百分之百

    int maxDepth(Node* root) {
       // 迭代还是。
       if(root== nullptr){
           return 0;
       }
       int depth=0;
       queue<Node*>layerNodes;
       layerNodes.push(root);

       while(layerNodes.empty()== false){
            ++depth;
            int thisLayerCount=layerNodes.size();
            for(int i=0;i<thisLayerCount;++i){
                auto node=layerNodes.front();
                layerNodes.pop();
                for(const auto &child:node->children){
                    layerNodes.push(child);
                }
            }
       }
       return depth;
    }
};

// 猪猪递归

int maxDepth(Node* root) {
    if(root== nullptr){
        return 0;
    }
    auto max=0;
    for(auto &child:root->children){
        auto tmp= maxDepth(child);
        max=(max<tmp)?tmp: max;
    }
    return max+1;
}
#endif //LEETCODE_OPTIMAL_SOLUTIONS_0559_N_叉树的最大深度_H
