//
//  main.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/5/28.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include <iostream>
//#include "MyQueue.cpp"
#include "queue"
using namespace std;

int main(int argc, const char * argv[]) {
//    MyQueue q;
//    q.enQueue(5);
//    q.enQueue(3);
//    if (!q.isEmpty()) {
//        cout << q.Front() << endl;
//    }
//    q.deQueue();
//    if (!q.isEmpty()) {
//        cout << q.Front() << endl;
//    }
//
//    q.deQueue();
//    if (!q.isEmpty()) {
//        cout << q.Front() << endl;
//    }
//    return 0;
    queue<int> q;
    q.push(5);
    q.push(13);
    q.front();
    q.back();
    q.pop();
    if (q.empty()) {
        
    }
}
