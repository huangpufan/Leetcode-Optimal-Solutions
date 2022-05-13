//
// Created by hpf on 22-5-12.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0205_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0205_H

#include "../SolutionCommon.h"

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.empty()&&t.empty()){
            return true;
        }
        if(s.length()!=t.length()){
            return false;
        }
        map <char,vector<int>>letterLocMap,letterLocMap2;
        for(int i=0;i<s.length();i++){
            if(letterLocMap.find(s[i]) != letterLocMap.end()){
                // 已存在
                letterLocMap[s[i]].push_back(i);
            }else{
                // 不存在
                vector<int>tmp={i};
                letterLocMap[s[i]]=tmp;
            }
            if(letterLocMap2.find(t[i]) != letterLocMap2.end()){
                // 已存在
                letterLocMap2[t[i]].push_back(i);
            }else{
                // 不存在
                vector<int>tmp={i};
                letterLocMap2[t[i]]=tmp;
            }
        }
        if(letterLocMap.size()!=letterLocMap2.size())
            return false;
        for(auto entity=letterLocMap.begin();entity!=letterLocMap.end();entity++){
            const char& thisChar=t[entity->second[0]];
            for(size_t i=0;i<entity->second.size();i++){
                if(t[entity->second[i]]!=thisChar){
                    return false;
                }
            }
        }
        return true;
    }
};


/*
 * 这题还蛮有趣的，其实我觉得只要确定一个求值方式，让相同编码模式对应同一个值就可以了。
 * 也就是说字母并不重要，重要的是他们对应的出现位置生成的值，不过想了一下，这样需要遍历两个字符串，其实如果只遍历一个字符串
 * 用  map 存下来各个字母出现的位置，然后根据该 map 遍历字符串2 对应的字母对应位置是否相同，出错的时机，会更早一些。
 * 但是这需要做两个方向的映射，因为如果前者更细碎，那么后者一定会成功。
 *
 */
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0205_H
