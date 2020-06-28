//
//  QueueWithTwoStacks.hpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/26.
//  Copyright © 2020 ThePixel. All rights reserved.
//

/**
 两个栈stack1、stack2实现一个队列queue。
 思路：将stack1当作队列，stack2当作辅导栈
 
 入队：stack1.push(element)
 出队：如果stack2不为空，stack2.pop
      如果stack2为空，先讲stack1中的元素push进stack2中，
      然后stack2.pop;
 */
#ifndef QueueWithTwoStacks_hpp
#define QueueWithTwoStacks_hpp

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>
#include <math.h>
#include <map>
#include <list>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

#endif /* QueueWithTwoStacks_hpp */
