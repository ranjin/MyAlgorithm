//
//  剑指 Offer 03.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/13.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "剑指 Offer 03.hpp"
/**
 输入：
 [2, 3, 1, 0, 2, 5, 3]
 输出：2 或 3
 */
class Solution{
public:
    /**
     先排序，再遍历
     时间复杂度：O(n*logN) 空间复杂度O(1)
     */
    int findRepeatNumber(vector<int>& nums){
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            if (nums[i] == nums[j]) {
                return nums[i];
            }
        }
        return -1;
    }
    
    /**
     采用set的特性
     时间复杂度NO(n) 空间复杂度O(n)
     */
    int findRepeatNumber2(vector<int>& nums){
        set<int> myset;
        for (int i = 0; i < nums.size(); i++) {
            if (!myset.insert(nums[i]).second) {
                return nums[i];
            }
        }
        return -2;
    }
};
