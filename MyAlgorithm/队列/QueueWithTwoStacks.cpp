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
        if (stack2.empty()) {
            while (!stack1.empty()) {
                int value = stack1.top();
                stack2.push(value);
                stack1.pop();
            }
        }
        if (stack2.empty()) {
            return -1;
        }else{
            int val = stack2.top();
            stack2.pop();
            return val;
=======
            int value = stack2.top();
            stack2.pop();
            return value;
        }
    }
};
