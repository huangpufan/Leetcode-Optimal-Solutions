//
// Created by hpf on 22-5-10.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONCOMMON_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONCOMMON_H



#include <vector>
#include <cstring>
#include <cstdio>
#include "iostream"
#include "cmath"
#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONCOMMON_H