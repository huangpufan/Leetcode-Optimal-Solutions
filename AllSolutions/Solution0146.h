//
// Created by hpf on 22-5-24.
//

#ifndef LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0146_H
#define LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0146_H

#include "../SolutionCommon.h"


// 146. LRU 缓存 mid

// 请你设计并实现一个满足 LRU (最近最少使用) 缓存 约束的数据结构。
// 实现 LRUCache 类：

// LRUCache(int _capacity) 以 正整数 作为容量 _capacity 初始化 LRU 缓存

// int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。

// void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value ；如果不存在，则向缓存中插入该组 key-value 。

// 如果插入操作导致关键字数量超过 _capacity ，则应该 逐出 最久未使用的关键字。

// 函数 get 和 put 必须以 O(1) 的平均时间复杂度运行。




class LRUCache {
private:

    int _capacity;
    int len=0;
    unordered_map<int, list<pair<int,int>>::iterator> _table;
    list<pair<int,int>> _lru;

public:

    LRUCache(int capacity) : _capacity(capacity) {

    }

    int get(int key) {
        auto it = _table.find(key);
        if (it != _table.end()) {
            // 存在该值，只需要更换位置就好

            _lru.splice(_lru.begin(), _lru, it->second);
            return it->second->second;
        } else {
            return -1;
        }
    }

    void put(int key, int value) {
        auto it = _table.find(key);
        if (it != _table.end()) {
            // 存在该值，只需要更换位置就好
            _lru.splice(_lru.begin(), _lru, it->second);
            it->second->second = value;
            return;
        } else {

            _lru.emplace_front(key, value);
            _table[key]=_lru.begin();
            if (_table.size() > _capacity) {
                // 满了
                _table.erase(_lru.back().first);
                _lru.pop_back();
            }
        }
    }
};


// WTF
// 这个题我写了挺多时间，tmd 我是个篮子。这里把.end 迭代器以为是最后一个，调试了一个小时。

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(_capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

#endif //LEETCODE_OPTIMAL_SOLUTIONS_SOLUTION0146_H
