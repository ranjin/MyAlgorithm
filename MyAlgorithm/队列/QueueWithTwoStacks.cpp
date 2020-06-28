//
//  QueueWithTwoStacks.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/26.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "QueueWithTwoStacks.hpp"
class CQueue{
public:
    stack<int> stack1;
    stack<int> stack2;
    CQueue(){}
    void appendTail(int value){
        stack1.push(value);
    }
    
    int deleteHead(){
        if (stack1.empty()) {
            return -1;
        }
        while (stack1.size() > 0) {
            int value = stack1.top();
            stack1.pop();
            stack2.push(value);
        }
    }
};
