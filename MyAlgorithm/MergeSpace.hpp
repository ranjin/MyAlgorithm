//
//  MergeSpace.hpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/6/16.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#ifndef MergeSpace_hpp
#define MergeSpace_hpp

#include <stdio.h>
#include <iostream>
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

using namespace::std;

/**
 合并区间

 首先，我们将列表中的区间按照左端点升序排序。然后我们将第一个区间加入 merged 数组中，并按顺序依次考虑之后的每个区间：

 如果当前区间的左端点在数组merged中最后一个区间的右端点之后，那么它们不会重合，我们可以直接将这个区间加入数组 merged 的末尾；

 否则，它们重合，我们需要用当前区间的右端点更新数组 merged 中最后一个区间的右端点，将其置为二者的较大值。


 */
#endif /* MergeSpace_hpp */
