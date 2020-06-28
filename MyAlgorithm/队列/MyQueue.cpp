//
//  MyQueue.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/25.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MyQueue.hpp"
class MyQueue{
private:
    vector<int> data;   //储存元素
    int p_start;        //队列的起点位置，一般初始化为0
    
public:
    MyQueue(){
        p_start = 0;
    }
    
    //插入一个元素到队列。
    bool enQueue(int x){
        //push_back:尾部添加一个元素
        data.push_back(x);
        return true;
    }
    
    //删除一个元素，即删除一个元素时，队列的起点位置+1；
    bool deQueue(){
        if (isEmpty()) {
            return false;
        }
        p_start++;
        return true;
    };
    
    //获取队列最前面的元素
    int Front(){
        return data[p_start];
    }
    
    //检查队列是否是存在、是否为空
    bool isEmpty(){
        return p_start >= data.size();
    }
};
