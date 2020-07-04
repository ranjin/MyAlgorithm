//
//  快速排序.cpp
//  MyAlgorithm
//
//  Created by 冉金 on 2020/6/27.
//  Copyright © 2020 ThePixel. All rights reserved.
//

#include "快速排序.hpp"
class Sort{
public:
    
    void Qsort(int arr[], int low, int high){
        if (high <= low) {
            return;
        }
        int i = low;
        int j = high+1;
        int key = arr[low];
        while (true) {
            while (arr[++i] < key) {
                if (i == high) {
                    break;
                }
            }
            while (arr[--j] > key) {
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
        Qsort(arr, low, j-1);
        Qsort(arr, j+1, high);
    }
//    void Qsort(int arr[], int low, int high){
//        if (high <= low) {
//            return;
//        }
//        int i = low;
//        int j = high+1;
//        int key = arr[low];
//        while (true) {
//            //从左向右找比key大的值
//            while (arr[++i] < key) {
//                if (i == high) {
//                    break;
//                }
//            }
//            //从右向左找比key小的值
//            while (arr[--j] > key) {
//                if (j == low) {
//                    break;
//                }
//            }
//            if (i >= j) {
//                break;
//            }
//            //交换i, j的值
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//        //中枢值与j对应值交换
//        int temp = arr[low];
//        arr[low] = arr[j];
//        arr[j] = temp;
//        Qsort(arr, low, j - 1);
//        Qsort(arr, j+1, high);
//    }
};
