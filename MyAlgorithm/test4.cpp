//
//  test4.cpp
//  MyAlgorithm
//
//  Created by ThePixel on 2020/7/23.
//  Copyright © 2020 Charles. All rights reserved.
//

#include "test4.hpp"

class Solution {
public:
    void Qsort(int arr[], int low, int high){
        if (low >= high) {
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
        Qsort(arr, low, j--);
        Qsort(arr, j++, high);
    }
};
