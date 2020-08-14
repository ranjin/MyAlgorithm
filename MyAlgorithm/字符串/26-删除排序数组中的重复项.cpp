//
//  26-删除排序数组中的重复项.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/8/13.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "26-删除排序数组中的重复项.hpp"
/**
 对于数组来说，在尾部插入、删除元素是比较高效的，时间复杂度是O(1)
 但是如果在中间或者开头插入、删除，就会涉及数据的搬移，时间复杂度为O(N), 效率较低。
 快慢指针法:
 每一次循环，fast指针++，如果slow和fast不相等，slow++，fast的值给slow
 */
class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int n = (int)nums.size();
        if (n == 0) {
            return 0;
        }
        int slow = 0;
        int fast = 1;
        while (fast < n) {
            if (nums[slow] != nums[fast]) {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }
        return slow+1;
    }
};





































