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
    
    int right_bound(vector<int>& nums, int target){
        int left = 0;
        int right = (int)nums.size()-1;
        while (left <= right) {
            int mid = (int)left + (right-left)/2;
            if (nums[mid] == target) {
                left = mid + 1;
            }else if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }
        }
        if (right < 0 || nums[right] != target) {
            return -1;
        }
        return right;
    }
    int left_bound(vector<int>& nums, int target){
        int left = 0;
        int right = (int)nums.size()-1;
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (nums[mid] == target) {
                right = mid - 1;
            }else if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }
        }
        if (left >= (int)nums.size() || nums[left] != target) {
            return -1;
        }
        return left;
    };
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = left_bound(nums, target);
        int right = right_bound(nums, target);
        return {left, right};
    }
    int binarySearch(vector<int>& nums, int target){
        int left = 0, right = (int)nums.size()-1;
        while (left <= right) {
            int mid = left + (right-left) / 2;
            if (nums[mid] == target) {
                return mid;
            }else if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }
        }
        return -1;
    };
    
//    int binarySearch(vector<int>& nums, int target){
//        if (nums.size() == 0) {
//            return -1;
//        }
//        int left = 0;
//        int right = (int)(nums.size()-1);
//        while (left <= right) {
//            int mid = left + (right-left) / 2;
//            if (nums[mid] == target) {
//                return nums[mid];
//            }else if (nums[mid] < target){
//                left = mid + 1;
//            }else{
//                right = mid + 1;
//            }
//        }
//        return -1;
//    }
};
