//
//  搜索旋转排序数组.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "搜索旋转排序数组.hpp"

class Search{
public:
    int search(vector<int>& nums, int target){
        int n = (int)nums.size();
        //数组大小为0和1的容错处理
        if (!n) {
            return -1;
        }
        if (n == 1) {
            return target == nums[0] ? 0 : -1;
        }

        int l = 0, r = n-1;
        while (l <= r) {
            int mid = (l+r)/2;
            if (nums[mid] == target) {
                return mid;
            }
            //在[l, mid-1]中寻找
            if (nums[0] <= nums[mid]) {
                if (target >= nums[0] && target < nums[mid]) {
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }else{
                //在[mid+1, r]中查找
                if (target > nums[mid] && target <= nums[n-1]) {
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};
