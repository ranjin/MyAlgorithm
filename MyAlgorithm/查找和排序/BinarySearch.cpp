//
//  BinarySearch.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

//二分查找
#include "BinarySearch.hpp"
class BinarySearch{
public:
    int binarySearch(vector<int>& nums, int target){
        if (nums.size() == 0) {
            return -1;
        }
        int left = 0;
        int right = (int)(nums.size()-1);
        while (left <= right) {
            int mid = left + (right-left) / 2;
            if (nums[mid] == target) {
                return nums[mid];
            }else if (nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid + 1;
            }
        }
        return -1;
    }
};
