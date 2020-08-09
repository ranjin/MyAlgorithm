//
//  旋转数组的最小数字.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "旋转数组的最小数字.hpp"
class Solution{
public:
    
    void Qsort(int arr[], int low, int high){
        int i = low;
        int j = high;
        int key = arr[low];
        if (low >= high) {
            return;
        }
        while (true) {
            while (arr[++i] > key) {
                if (i == high) {
                    break;
                }
            }
            while (arr[--j] < key) {
                if (j == low) {
                    break;
                }
            }
            if (i >= j) {
                break;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        Qsort(arr, low, j--);
        Qsort(arr, high, j++);
    }
//    int minArray(vector<int>& numbers){
//        int n = (int)numbers.size();
//        int index = random
//        if (!n) {
//            return -1;
//        }
//        if (n == 1) {
//            return numbers[0];
//        }
//        int l = 0;
//        int r = n - 1;
//        if (numbers[r] > numbers[l]) {  //未旋转
//            return numbers[l];
//        }
//        while (l < r) {
//            int mid = l + (r-l)/2;
//            if (numbers[mid] > numbers[r]) {
//                l = mid+1;
//            }else{
//                r = mid;
//            }
//        }
//        return numbers[l];
//    }
};
