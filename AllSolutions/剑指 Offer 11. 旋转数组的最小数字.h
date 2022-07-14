//
// Created by hpf on 22-7-14.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_11_旋转数组的最小数字_H
#define LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_11_旋转数组的最小数字_H

#include "../SolutionCommon.h"


//    剑指 Offer 11. 旋转数组的最小数字 ez

//    把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。

//    给你一个可能存在 重复 元素值的数组 numbers ，它原来是一个升序排列的数组，并按上述情形进行了一次旋转。请返回旋转数组的最小元素。
//    例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一次旋转，该数组的最小值为 1。

//    注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1], a[0], a[1], a[2], ..., a[n-2]] 。
//
//    示例 1：

//    输入：numbers = [3,4,5,1,2]
//    输出：1
//    示例 2：

//    输入：numbers = [2,2,2,0,1]
//    输出：0

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int le=0,ri=numbers.size()-1;
        int mid=le+(ri-le)>>1;
        while(le<ri){
            mid=le+((ri-le)>>1);
            if(numbers[mid]<numbers[ri]){
                ri=mid;
            }else if(numbers[mid]>numbers[ri]){
                le=mid+1;
            }else{
                --ri;
            }
        }
        return numbers[le];
    }
};
// 精妙。mid < ri 说明最小值在左边，> 在右边。相等说明要舍弃一个。可以优化让ri一直走到不等的时候，但是可能会舍弃掉mid，就不好了。

#endif //LEETCODE_OPTIMAL_SOLUTIONS_剑指_OFFER_11_旋转数组的最小数字_H
