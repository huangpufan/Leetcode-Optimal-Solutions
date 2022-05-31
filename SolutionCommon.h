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
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTIONCOMMON_H