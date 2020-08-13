//
//  Test2.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/7/31.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "Test2.hpp"
class binarySearch{
    
public:
    int search(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size()-1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] == target) {
                return mid;
            }else if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid-1;
            }
        }
        return -1;
    }
};
