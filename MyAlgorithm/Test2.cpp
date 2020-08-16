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
    void bubbleSort()
    void Qsort(int arr[], int low, int high){
        if (low >= high) {
            return;
        }
        int i = low;
        int j = high+1;
        int key = arr[low];
        while (true) {
            //
            while (arr[i++] < key) {
                if (i == high) {
                    break;
                }
            }
            while (arr[j--] > key) {
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
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;
        Qsort(arr, low, j--);
        Qsort(arr, j++, high);
    }
};
