//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_61_扑克牌中的顺子_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_61_扑克牌中的顺子_H

#include "../SolutionCommon.h"

//    剑指 Offer 61. 扑克牌中的顺子 ez

//    从若干副扑克牌中随机抽 5 张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字本身，
//    A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能视为 14。

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int king_count=0;
        int max=-1,min=14;
        unordered_map<int,int>count_map;
        for(int i=0;i<nums.size();++i){
            int& v=nums[i];
            if(count_map.count(v)==0){
                count_map[v]=1;
            }else{
                if(v!=0){
                    return false;
                }
            }
            if(v>max){
                max=v;
            }
            if(v!=0&&v<min){
                min=v;
            }
        }
        return (max-min<=4);
    }
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_61_扑克牌中的顺子_H
