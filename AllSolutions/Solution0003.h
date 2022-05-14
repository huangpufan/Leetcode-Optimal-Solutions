//
// Created by hpf on 22-5-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0003_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0003_H
#include "../SolutionCommon.h"


/* 3. 无重复字符的最长子串 mid
 *
 * 给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>letterMap;
        int le=0,ri=0;
        int maxLength=0;

        while(ri<s.length()){

        }

    }
};

/*
 * 本题的第一眼思路就是先遍历一遍字符串找到每个字母对应的上一个出现位置，然后滑动窗口扫一遍记录最长长度即可。
 *
 * 但是我的记录位置是用一个 map 存了本次位置以及上次位置，这样从左到右更新，两个值一起更新就好。
 *
 * 但思考了一下，我们在使用双指针的情况下，根本不需要提前遍历，因为右指针的作用就是遍历并且记录，而左指针的意义在于抛弃。
 *
 * 我们只需要维护当前序列中的 无序 set 就好了，如果已经有了，那么左指针一直右移到合适的位置，那么遍历下来最多也就是 O（2n）
 *
 * 而且这个思路我觉得很妙。
 */


#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0003_H