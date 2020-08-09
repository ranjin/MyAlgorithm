//
//  StackWithOneQueue.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/7/4.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "StackWithOneQueue.hpp"
class MyStack{
public:
    queue<int> myQueue; //单队列
    MyStack(){
        
    }
    
    //
    void push(int x){
        myQueue.push(x);
    }
    
    int pop(){
        for (int i = 0; i < myQueue.size()-1; i++) {
            myQueue.push(myQueue.front());
            myQueue.pop();
        }
        int value = myQueue.front();
        myQueue.pop();
        return value;
    }
    
    int top(){
        return myQueue.back();
    }

    bool empty(){
        return myQueue.empty();
    }
    
};
