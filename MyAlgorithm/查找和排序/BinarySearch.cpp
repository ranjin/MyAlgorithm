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
    //一般的二分查找框架
    int binarySearch(vector<int>& nums, int target){
        int left = 0;
        int right = (int)nums.size()-1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] == target) {
                return mid;
            }else if (target > nums[mid]){
                left = mid + 1;
            }else if (target < nums[mid]){
                right = mid - 1;
            }
        }
        return -1;
    }
    
    /**
     寻找左侧边界的二分查找
     比如nums[] = [1,2,2,3]; 左侧边界为1,右侧边界为2
     */
    int left_bound(vector<int>& nums, int target){
        if (nums.size() == 0) {
            return -1;
        }
        int left = 0;
        int right = (int)nums.size()-1;    //注意
        while (left <= right) {
            int mid = left + (left + right) / 2;
            if (target == nums[mid]) {
                //收缩右侧边界
                right = mid-1;
            }else if (target > nums[mid]){
                //搜索区间变为[mid+1, right]
                left = mid+1;
            }else if (target < nums[mid]){
                //搜索区间变为[left, mid-1]
                right = mid-1;
            }
        }
        //检查出界情况
        if (left >= nums.size() || nums[left] != target) {
            return -1;
        }
        return left;
    }
    
    /**
     寻找右侧边界的二分查找
     */
    int right_bound(vector<int>& nums, int target){
        if (nums.size() == 0) {
            return -1;
        }
        int left = 0;
        int right = (int)nums.size();
        while (left <= right) {
            int mid = left+(left + right)/2;
            if (target == nums[mid]) {
                left = mid+1;
            }else if (target > nums[mid]){
                left = mid+1;
            }else if (target < nums[mid]){
                right = mid-1;
            }
        }
        //right越界的情况
        if (right < 0 || nums[right] != target) {
            return -1;
        }
        return right;
    }
};
