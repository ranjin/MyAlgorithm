//
//  MyCircularQueue.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/25.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "MyCircularQueue.hpp"
class MyCircularQueue{
private:
    vector<int> data;
    int head;   //队头
    int tail;   //队尾
    int size;
public:
    //初始化一个大小为k的队列
    MyCircularQueue(int k){
        //resize函数：改变当前使用数据的大小
        data.resize(k);
        head = -1;
        tail = -1;
        size = k;
    }
    
    //往循环队列中插入一个元素: 改变的是队尾的元素
    bool enQueue(int value){
        if (isFull()) {
            return false;
        }
        if (head == -1) {
            head = 0;
        }
        tail = (tail+1) % size;
        data[tail] = value;
        return true;
    }
    
    //从队列中删除一个元素: 改变的是队头的值
    bool deQueue(){
        if (isEmpty()) {
            return false;
        }
        //如果只有一个元素，回归到初始化的时候
        if (head == tail) {
            head = -1;
            tail = -1;
            return true;
        }
        head = (head+1) % size;
        return true;
    }
    
    //获取队列的第一个元素
    int Front(){
        if (isEmpty()) {
            return -1;
        }
        return data[head];
    }
    
    //获取队列的最后一个元素
    int Rear(){
        if (isEmpty()) {
            return -1;
        }
        return data[tail];
    }
    
    //检查循环队列是否为空
    bool isEmpty(){
        if (head == -1 && tail == -1) {
            return true;
        }
        return false;
    }
    
    //检查循环队列是否已满
    bool isFull(){
        if ((tail + 1) % size == head) {
            return true;
        }
        return false;
    }
};
