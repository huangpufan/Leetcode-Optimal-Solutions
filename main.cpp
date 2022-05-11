#include <iostream>
#include "SolutionCommon.h"

class demo {
public:
    demo()  {
        cout << "construct!" << endl;
    }

    demo(const demo &d)  {
        cout << "copy construct!" << endl;
    }

    //添加移动构造函数
    demo(demo &&d) {
        cout << "move construct!" << endl;
    }

    ~demo() {
        cout << "class destruct!" << endl;
    }


};

demo get_demo() {
    return demo();
}

int main() {
    demo a = get_demo();
    return 0;
}