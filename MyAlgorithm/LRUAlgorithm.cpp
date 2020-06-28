//
//  LRUAlgorithm.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/5/30.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <stack>
#include <math.h>
#include <map>
#include <list>
#include <string.h>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
class LRUCache{
private:
    int cap;
    //双链表：装着(key, value)的元组
    list<pair<int, int>> cache;
    
    //哈希表, key映射到(key, value)在cache中的位置
    unordered_map<int, list<pair<int, int>> ::iterator> map;
    
public:
    LRUCache(int capacity){
        this->cap = capacity;
    }
    
    int get(int key){
        auto it = map.find(key);
        //访问的key不存在
        if (it == map.end()) {
            return -1;
        }
        //key存在，把(k, v)换到队头
        pair<int, int> kv = *map[key];
        
        //删除链表里面key对应的元组
        cache.erase(map[key]);
        
        //插入到最前面
        cache.push_front(kv);
        
        //更新kv在cache中的位置
        map[key] = cache.begin();
        return kv.second;
    }
    
    void put(int key, int value){
        /**
         要先判断key是否已经存在
         */
        auto it = map.find(key);
        if (it == map.end()) {
            //key不存在，判断cache是否已满
            if (cache.size() == cap) {
                //cache已满,删除尾部的键值对
                //cache和map中的数据都要删除
                auto lastPair = cache.back();
                int lastKey = lastPair.first;
                map.erase(lastKey);
                cache.pop_back();
            }
            //cache没满,可以直接添加
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        }else{
            //key存在，更改value并换到队头
            cache.erase(map[key]);
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        }
    }
};
