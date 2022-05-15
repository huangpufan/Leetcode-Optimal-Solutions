#include <iostream>
#include "SolutionCommon.h"
#include "AllSolutions/Solution0053.h"

int main() {
    string a = "bbbbb", b = "bada";
    Solution s;
    vector<int>aaa{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<s.maxSubArray(aaa);
    return 0;
}